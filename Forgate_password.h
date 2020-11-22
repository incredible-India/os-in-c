void open_windows(char [],int);
void REadagain(char [],char []);
void enter_password(int);
void welcome_window();
void FOrgate_password(void)
{
    extern int i,j;

    int p;
      srand(p);
    p=rand()+1000;
    system("cls");
    char ch[40],mob[40]; a4:
        system("cls");
    gotoxy(16,5);
    printf("NAME : ");
    gets(ch);
    gotoxy(68,5);
    printf("MOBILE NO :");
    gets(mob);
      if(strlen(mob)!=10)
      {
          system("cls");
        system("color 0c");
        gotoxy(29,12);
        printf("\aINCORRECT MOBILE NO..");
        gotoxy(40,16);
        printf("PRESS ANY KEY TO CONTINUE..");
        getch();
        goto a4;


      }a7:
           REadagain(ch,mob);
      system("cls");
      gotoxy(40,12);
      printf("THIS IS THE TEMPORARY PIN VALID FOR ONCE IN A TIME");
        gotoxy(40,16);
        printf("%d",p);

gotoxy(40,18);
printf("Press Any Key To Continue");
 getch();
open_windows(ch,p);


}
void open_windows(char name_exe[],int p)
{
    extern int i,j;
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
gotoxy(43,16);
SetColor(43);
printf("%s",strupr(name_exe));



enter_password(p);
}
void enter_password(int pass)
{
    extern int i,j;
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
    for(i=1;i<=6;i++)
 {
int password;
gotoxy(47,19);
scanf("%d",&password);
if(password==pass)
{
system("cls");
gotoxy(40,12);
welcome_window();
getch();
exit(1);

}else
{
    gotoxy(41,22);
    Beep(1000,100);
    SetColor(44);
    printf("INCORRECT PASSWORD");
}
if(i==4)
{
system("cls");
gotoxy(21,12);
system("color 71");
printf("YOU ENTERED MULTIPLE TIMES WRONG PASSWORD PLZ TRY AGAIN AFTER SOMETIME LATAR ");
getch();
exit(0);

}
 }

}




