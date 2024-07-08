#include<stdio.h>
#include<stdlib.h>
struct interface
{
    char id[100];
    char ps[100];
}d;
struct studentt
{
    int rollno;
    char name[30];
    int age;
    int clas;
    char ps[100];
}e;
struct teacherr
{
    int tid;
    char name[30];
    int age;
    int salary;
    char ps[100];
}f;
void admin()
{
    ad();
}
void  teacherrr()
{
    teacherl();
}
void studenttt()
{
    studentl();
}
void login()
{
    struct interface d;
    char user[100];
    char pass[100];
    int c=0;
     printf("Enter the username ");
    fflush(stdin);
     gets(user);
    printf("Enter the password ");
    fflush(stdin);
    gets(pass);
    FILE *fp;
    fp=fopen("interface.txt","r");
    while(fread(&d,sizeof(d),1,fp));
    {
        if((strcmp(user,d.id)==0) && (strcmp(pass,d.ps)==0))
        {
            printf("username succesful");
            c++;
             re();
    }
    }
    if(c==0)
    {
        printf("Wrong username or password");
    }
}

void student()
{
    st();
}
void Teacher()
{
    tc();
}
void Add()
{
    ed();
}
void signup()
{
    struct interface d;
    printf("Enter the username ");
    fflush(stdin);
     gets(d.id);
    printf("Enter the password ");
    fflush(stdin);
    gets(d.ps);
    FILE *fp;
    fp=fopen("interface.txt","a+");
    fwrite(&d,sizeof(d),1,fp);
    fclose(fp);
}

void Enter()
{
    struct studentt e;
    printf("Enter roll number");
    scanf("%d",&e.rollno);
    printf("Enter name");
      fflush(stdin);
    gets(e.name);
    printf("Enter age");
    scanf("%d",&e.age);
    printf("Enter class");
    scanf("%d",&e.clas);
    FILE *fp;
    fp=fopen("student.txt","a+");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);
}
void Read()
{
    struct studentt e;
    FILE *fp;
    printf("Rollno Name Age Class");
    fp=fopen("student.txt","r");
    while(fread(&e,sizeof(e),1,fp))
         {
    printf("\n%d ",e.rollno);
    printf("%s ",e.name);
    printf("%d ",e.age);
    printf("%d ",e.clas);
     }
        fclose(fp);
}
void Search()
{
    FILE *fp;
    int n,c=0;
    printf("Enter a rollno");
    scanf("%d",&n);
        fp=fopen("student.txt","r");
    while(fread(&e,sizeof(e),1,fp))
    {
    if(n==e.rollno)
    {
        printf("Rollno Name Class");
    printf("\n%d ",e.rollno);
    printf("%s ",e.name);
    printf("%d ",e.age);
    printf("%d ",e.clas);
    c++;
    break;
    }
    }
    if(c==0)
    {
        printf("no record found");
    }
    }
    void deletee()
    {
        struct studentt e;
        int n;
        FILE *fp,*fp1;
        fp=fopen("student.txt","r");
        fp1=fopen("temp.txt","w");
        printf("Enter the rollno to be deleted");
        scanf("%d",&n);
        while(fread(&e,sizeof(e),1,fp))
        {
         if(n!=e.rollno)
                  {
                fwrite(&e,sizeof(e),1,fp1);
                 }

    }
        fclose(fp);
    fclose(fp1);
    fp=fopen("student.txt","w");
    fp1=fopen("temp.txt","r");
        while(fread(&e,sizeof(e),1,fp1))
         {
    fwrite(&e,sizeof(e),1,fp);
     }
     fclose(fp);
     fclose(fp1);
    }
void update()
    {
        struct studentt e;
        int n;
        FILE *fp,*fp1;
        fp=fopen("student.txt","r");
        fp1=fopen("temp.txt","w");
        printf("Enter the roll no to be updated");
        scanf("%d",&n);
        while(fread(&e,sizeof(e),1,fp))
        {
         if(n==e.rollno)
                  {
               printf("Enter the new updated name,age and class");
               scanf("%s \nage %d \nclass %d",&e.name,&e.age,&e.clas);
                 }

                     fwrite(&e,sizeof(e),1,fp1);

    }
        fclose(fp);
    fclose(fp1);
    fp=fopen("student.txt","w");
    fp1=fopen("temp.txt","r");
        while(fread(&e,sizeof(e),1,fp1))
         {
    fwrite(&e,sizeof(e),1,fp);
     }
     fclose(fp);
     fclose(fp1);
    }

  void Enter1()
{
    struct teacherr f;
    printf("Enter teacher id ");
    scanf("%d",&f.tid);
     printf("Enter name");
      fflush(stdin);
    gets(f.name);
    printf("Enter the age");
    scanf("%d",&f.age);
    printf("Enter salary");
    scanf("%d",&f.salary);
    FILE *fp;
    fp=fopen("teacher.txt","a+");
    fwrite(&f,sizeof(f),1,fp);
    fclose(fp);
}
void Read1()
{
    struct teacherr f;
    FILE *fp;
    printf("Tid  Name Age Salary");
    fp=fopen("teacher.txt","r");
    while(fread(&f,sizeof(f),1,fp))
         {
    printf("\n%d ",f.tid);
    printf("%s ",f.name);
    printf("%d ",f.age);
    printf(" %d ",f.salary);
     }
        fclose(fp);
}
void Search1()
{
    FILE *fp;
    int n,c=0;
    printf("Enter a teacherid");
    scanf("%d",&n);
        fp=fopen("teacher.txt","r");
    while(fread(&f,sizeof(f),1,fp))
    {
    if(n==f.tid)
    {
        printf("Tid  Name Age  Salary");
    printf("\n%d ",f.tid);
    printf("%s ",f.name);
    printf("%d",f.age);
    printf("%d ",f.salary);
    c++;
    break;
    }
    }
    if(c==0)
    {
        printf("no record found");
    }
    }
    void deletee1()
    {
        struct teacherr f;
        int n;
        FILE *fp,*fp1;
        fp=fopen("teacher.txt","r");
        fp1=fopen("temp1.txt","w");
        printf("Enter the rollno to be deleted");
        scanf("%d",&n);
        while(fread(&f,sizeof(f),1,fp))
        {
         if(n!=f.tid)
                  {
                fwrite(&f,sizeof(f),1,fp1);
                 }

    }
        fclose(fp);
    fclose(fp1);
    fp=fopen("teacher.txt","w");
    fp1=fopen("temp1.txt","r");
        while(fread(&f,sizeof(f),1,fp1))
         {
    fwrite(&f,sizeof(f),1,fp);
     }
     fclose(fp);
     fclose(fp1);
    }
void update1()
    {
        struct teacherr f;
        int n;
        FILE *fp,*fp1;
        fp=fopen("teacher.txt","r");
        fp1=fopen("temp1.txt","w");
        printf("Enter the roll no to be updated");
        scanf("%d",&n);
        while(fread(&f,sizeof(f),1,fp))
        {
         if(n==f.tid)
                  {
               printf("Enter the new updated name, age and salary");
               scanf("%s \n%d \n%d",&f.name,&f.age,&f.salary);
                 }

                     fwrite(&f,sizeof(f),1,fp1);

    }
        fclose(fp);
    fclose(fp1);
    fp=fopen("teacher.txt","w");
    fp1=fopen("temp1.txt","r");
        while(fread(&f,sizeof(f),1,fp1))
         {
    fwrite(&f,sizeof(f),1,fp);
     }
     fclose(fp);
     fclose(fp1);
    }

void login1()
{
    struct teacherr f;
     FILE *fp;
    int n,c=0;
    char pass[100];
    printf("Enter a teacherid");
    scanf("%d",&n);
    printf("Enter the password");
     fflush(stdin);
    gets(pass);
    fp=fopen("teacher.txt","r");
    while(fread(&f,sizeof(f),1,fp))
    {
    if(n==f.tid && (strcmp(f.ps,pass)==0))
    {
        printf("Tid  Name Age  Salary");
    printf("\n%d ",f.tid);
    printf("%s ",f.name);
    printf("%d",f.age);
    printf("%d ",f.salary);
    c++;
    break;
    }
    }
    if(c==0)
    {
    printf("Enter teacher id ");
    scanf("%d",&f.tid);
     printf("Enter password");
      fflush(stdin);
    gets(f.ps);
    FILE *fp;
    fp=fopen("teacher.txt","a+");
    fwrite(&f,sizeof(f),1,fp);
    fclose(fp);
    }
    }
    void login2()
{
    struct studentt e;
     FILE *fp;
    int n,c=0;
    char pass[100];
    printf("Enter a studentid");
    scanf("%d",&n);
    printf("Enter the password");
     fflush(stdin);
    gets(pass);
    fp=fopen("student.txt","r");
    while(fread(&e,sizeof(e),1,fp))
    {
    if(n==e.rollno && (strcmp(e.ps,pass)==0))
    {
        printf("Tid  Name Age  Salary");
    printf("\n%d ",e.rollno);
    printf("%s ",e.name);
    printf("%d",e.age);
    printf("%d ",e.clas);
    c++;
    break;
    }
    }
    if(c==0)
    {
    printf("Enter student id ");
    scanf("%d",&e.rollno);
     printf("Enter password");
      fflush(stdin);
    gets(e.ps);
    FILE *fp;
    fp=fopen("teacher.txt","a+");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);
    }
    }

    int menu()
{
    int ch;
    printf("\n1 for Enter       2 for Read \n3 for search      4 for delete \n5 for update      6 for exit");
    scanf("%d",&ch);
    return(ch);
}
 int menu1()
{
    int ch;
    printf("\n1 for Login \n2 for Exit ");
    scanf("%d",&ch);
    return(ch);
}
int menu2()
{
    int ch;
    printf("\n1 for Admin login \n2 for Student login \n3 for Teacher login \n4 for exit");
    scanf("%d",&ch);
    return(ch);
}
int menu3()
{
    int ch;
    printf("\n1 for Student Record \n2 for Teacher Record \n3 for add-admin \n4 for exit");
    scanf("%d",&ch);
    return(ch);
}
int menu4()
{
    int ch;
    printf("\n1 for signup \n2 for exit");
    scanf("%d",&ch);
    return(ch);
}
int menu5()
{
    int ch;
    printf("\n1 for Enter       2 for Read \n3 for search      4 for delete \n5 for update      6 for exit");
    scanf("%d",&ch);
    return(ch);
}
int menu6()
{
    int ch;
    printf("\n1 for login \n2 for exit");
    scanf("%d",&ch);
    return(ch);
}
int menu7()
{
    int ch;
    printf("\n1 for login \n2 for exit");
    scanf("%d",&ch);
    return(ch);
}
void ed()
{
    while(1)
    {
        system("cls");
        switch(menu4())
        {
        case 1:
            signup();
            break;
        case 2:
            exit(0);
            break;
        }
        getch();
    }
}

void st()
{
    while(1)
    {
        system("cls");
        switch (menu())

        {
        case 1:
            Enter();
            break;
        case 2:
            Read();
            break;
        case 3:
            Search();
            break;
        case 4:
            deletee();
            break;
        case 5:
            update();
            break;
        case 6:
            exit(0);
            break;
    }
    getch();
}
}

void tc()
{
    while(1)
    {
        system("cls");
        switch (menu5())

        {
        case 1:
            Enter1();
            break;
        case 2:
            Read1();
            break;
        case 3:
            Search1();
            break;
        case 4:
            deletee1();
            break;
        case 5:
            update1();
            break;
        case 6:
            exit(0);
            break;
    }
    getch();
}
}
void re()
{
    while(1)
    {
        system("cls");
        switch (menu3())

        {
        case 1:
            student();
            break;
        case 2:
            Teacher();
            break;
        case 3:
            Add();
            break;
        case 4:
            exit(0);
            break;
        }
        getch();
    }

}

void ad()
{
    while(1)
    {
        system("cls");
        switch (menu1())

        {
        case 1:
            login();
            break;
        case 2:
            exit(0);
            break;
        }
        getch();
    }

}

void teacherl()
{
    while(1)
    {
        system("cls");
        switch (menu6())

        {
        case 1:
            login2();
            break;
        case 2:
            exit(0);
            break;
        }
        getch();
    }

}

void studentl()
{
    while(1)
    {
        system("cls");
        switch (menu7())

        {
        case 1:
            login2();
            break;
        case 2:
            exit(0);
            break;
        }
        getch();
    }

}
void main()
{
    while(1)
    {
        system("cls");
        switch (menu2())

        {
        case 1:
            admin();
            break;
         case 2:
           studenttt();
            break;
         case 3:
            teacherrr();
            break;
         case 4:
            exit(0);
            break;
        }
        getch();
    }

}



