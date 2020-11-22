void SetColor(int);
void gotoxy(int,int);
void New_User(void);
void FOrgate_password(void);
void get_help(void);
void welcome_window(void);
void welcome_windows(void)
{
extern int i,j;

SetConsoleTitle("OPENING SYSTEM..");
for(i=5;i<=14;i++)
{
    SetColor(59);
    gotoxy(35,i);
    printf("*");

}
for(i=5;i<=14;i++)
{
    SetColor(44);
    gotoxy(65,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(42);
    gotoxy(40,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(86);
    gotoxy(45,i);
    printf("*");

}
for(i=5;i<=6;i++)
{
    SetColor(46);
    gotoxy(50,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(77);
    gotoxy(55,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(75);
    gotoxy(60,i);
    printf("*");

}
gotoxy(45,16);
SetColor(43);
printf("...WELCOME...");
getch();
system("cls");
for(i=5;i<=14;i++)
{
    SetColor(59);
    gotoxy(35,i);
    printf("*");

}
for(i=5;i<=14;i++)
{
    SetColor(44);
    gotoxy(65,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(42);
    gotoxy(40,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(86);
    gotoxy(45,i);
    printf("*");

}
for(i=5;i<=6;i++)
{
    SetColor(46);
    gotoxy(50,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(77);
    gotoxy(55,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(75);
    gotoxy(60,i);
    printf("*");

}
gotoxy(40,16);
SetColor(86);
printf(" TO OPERATING SYSTEM");

getch();
a1:
system("cls");
for(i=5;i<=14;i++)
{
    SetColor(59);
    gotoxy(35,i);
    printf("*");

}
for(i=5;i<=14;i++)
{
    SetColor(44);
    gotoxy(65,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(42);
    gotoxy(40,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(86);
    gotoxy(45,i);
    printf("*");

}
for(i=5;i<=6;i++)
{
    SetColor(46);
    gotoxy(50,i);
    printf("*");

}
for(i=5;i<=8;i++)
{
    SetColor(77);
    gotoxy(55,i);
    printf("*");

}
for(i=5;i<=10;i++)
{
    SetColor(75);
    gotoxy(60,i);
    printf("*");

}
gotoxy(46,16);
SetColor(44);
printf("PASSWORD");
for(i=38;i<=62;i++)
{
    gotoxy(i,18);
    printf("-");

}
for(i=38;i<=62;i++)
{
    gotoxy(i,20);
    printf("-");

}
for(i=18;i<=20;i++)
{
    gotoxy(38,i);
    printf("-");

}
for(i=18;i<=20;i++)
{
    gotoxy(62,i);
    printf("-");

}


gotoxy(85,25);
SetColor(75);
printf("3: MORE OPTIONS");
gotoxy(40,25);
SetColor(44);
printf("2: FORGET PASSWORD");
gotoxy(02,25);
SetColor(42);
printf("1: NEW USER");
{
    char ch[10];
      gotoxy(47,19);
    gets(ch);

     if(ch[0]=='1')
    {
        New_User();
    }
    else if(ch[0]=='2')
    {
       FOrgate_password();
    }
    else if(ch[0]=='3')
    {
       get_help();
    }else if(ch[0]=='h')
    {
       welcome_window();

    }
    else
    {
        system("cls");
        printf("\a");
        goto a1;

    }
}

}

