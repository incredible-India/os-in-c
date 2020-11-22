#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void Readfile(void);
void user_copy(char [],char [],float ,char [],char []);
void New_welcome(char []);

 struct users
{
  char user_name[40],user_mob[12],user_email[40];
  float age;


};
void New_User(void)
{

 struct users  name,mob,email,last_name,age1;
  char c;
  system("cls");
  gotoxy(40,12);
  SetColor(91);
  printf("WELCOME TO THIS OPERATING SYSTEM");
  gotoxy(40,14);
  printf("HIT <ENTER> TO CONTINUE....... ");
  c=getch();
  if(c==ENTER)
  { a2:a3:
      system("cls");
      SetColor(95);
      gotoxy(16,5);
      printf("First Name :");
      SetColor(11);
      gets(name.user_name);

      SetColor(95);
      gotoxy(70,5);
      printf("Last Name :");
       SetColor(11);
      gets(last_name.user_name);
      gotoxy(16,10);
      SetColor(95);
      printf("MOBILE NO :");
      SetColor(11);
      gets(mob.user_mob);
      if(strlen(mob.user_mob)!=10)
      {
        system("cls");
        system("color 0c");
        gotoxy(40,12);
        printf("\aINCORRECT MOBILE NO..");
        gotoxy(40,16);
        printf("PRESS ANY KEY TO CONTINUE..");
        getch();
        goto a2;


      }
       SetColor(95);
      gotoxy(70,10);
      printf("AGE :");
      SetColor(11);
      scanf("%f",&age1.age);
      if(age1.age<=0)
      {
         system("cls");
        system("color 0c");
        gotoxy(40,12);
        printf("\aNEED TO BORN..");
        gotoxy(40,16);
        printf("PRESS ANY KEY TO CONTINUE..");
        getch();
        goto a3;
      }
         SetColor(95);
      gotoxy(16,15);
      printf("EMAIL ID :");
      SetColor(11);
      fflush(stdin);
      gets(email.user_email);
    user_copy(name.user_name,last_name.user_name,age1.age,mob.user_mob,email.user_email);
      New_welcome(name.user_name);
  }
  else
  {
      system("cls");
      printf("\a");
      New_User();
  }





}
void New_welcome(char name[])
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
gotoxy(45,16);
SetColor(43);
printf("%s",strupr(name));
getch();
system("cls");
 Readfile();

}
