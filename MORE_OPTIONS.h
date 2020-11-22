void TermandConditions(void);
void color(void);
void instruct(void);
void source_code(void);
void get_help(void)
{
    extern int i,j;

char ch; read2_again:
system("cls");
for(i=1;i<=16;i++)
{
   SetColor(42);
    gotoxy(51,i);
    printf("|");

}
for(i=0;i<=104;i++)
{
   SetColor(42);
    gotoxy(i,7.5);
    printf("-");

}
for(i=0;i<=104;i++)
{
   SetColor(42);
    gotoxy(i,12.5);
    printf("-");

}
for(i=0;i<=104;i++)
{
   SetColor(42);
    gotoxy(i,1);
    printf("-");

}
for(i=0;i<=104;i++)
{
   SetColor(42);
    gotoxy(i,17.5);
    printf("-");

}

gotoxy(16,5);
printf("1: GET INSTRUCTION...");
gotoxy(70,5);
printf("2: TERM AND CONDITIONS.. ");
gotoxy(16,10);
printf("3: GET THE SOURCE CODE..");
gotoxy(70,10);
printf("4: CHANGE THE COLOR");
gotoxy(16,15);
printf("5: <-- BACK");
gotoxy(70,15);
printf("6: EXIT");
ch=getch();
if(ch=='1')
{
    system("cls");
      instruct();
      getch();
       get_help();
}
else if(ch=='2')
{
    system("color 7c");
system("cls");
TermandConditions();
{
    char f;
    gotoxy(40,20);
    printf("PRESS <ENTER> TO GO BACK");
    f=getch();
    get_help();
}
}
else if(ch=='3')
{
    system("cls");
    source_code();
    getch();
    get_help();
}
else if(ch=='4')

{
color();
system("cls");
 welcome_windows();
    getch();
    get_help();
}
else if(ch=='5')
{
    system("cls");
      welcome_windows();
}
else if(ch=='6')
{
system("cls");
gotoxy(40,12);
system("color 71");
printf("THANX FOR USING THIS ");
getch();
exit(0);

}
else
{
printf("\a");
goto read2_again;

}


}
void color()
{
      float a; read3_again:
 system("cls");
     gotoxy(40,12);
    printf("ENTER THE NO IN BETWEEN (1 TO 56) ...  ");

  scanf("%f",&a);

   if(a==1)
   system("color 72");
   else if(a==2)
    system("color 70");
   else  if(a==3)
   system("color 71");
   else  if(a==4)
   system("color 73");
   else  if(a==5)
   system("color 74");
   else  if(a==6)
   system("color 75");
   else  if(a==7)
   system("color 76");
   else  if(a==8)
   system("color 01");
   else  if(a==9)
   system("color 02");
   else  if(a==10)
   system("color 03");
   else  if(a==11)
   system("color 04");
   else  if(a==12)
   system("color 05");
   else  if(a==13)
   system("color 06");
   else  if(a==14)
   system("color 07");
   else  if(a==15)
   system("color 10");
   else  if(a==16)
   system("color 12");
   else  if(a==17)
   system("color 13");
   else  if(a==18)
   system("color 14");
   else  if(a==19)
   system("color 15");
   else  if(a==20)
   system("color 16");
   else  if(a==21)
   system("color 17");

   else  if(a==22)
   system("color 20");

    else  if(a==23)
   system("color 21");

    else  if(a==24)
   system("color 23");

    else  if(a==25)
   system("color 24");

    else  if(a==26)
   system("color 25");

    else  if(a==27)
   system("color 26");

    else  if(a==28)
   system("color 27");

    else  if(a==29)
   system("color 30");

    else  if(a==30)
   system("color 31");

    else  if(a==31)
   system("color 32");

    else  if(a==32)
   system("color 34");

    else  if(a==33)
   system("color 35");

    else  if(a==34)
   system("color 36");

    else  if(a==35)
   system("color 37");

    else  if(a==36)
   system("color 40");

    else  if(a==37)
   system("color 41");

    else  if(a==38)
   system("color 42");

    else  if(a==39)
   system("color 43");

    else  if(a==40)
   system("color 45");
 else  if(a==41)
   system("color 46");

    else  if(a==42)
   system("color 47");

    else  if(a==43)
   system("color 50");

    else  if(a==44)
   system("color 51");
 else  if(a==45)
   system("color 52");
 else  if(a==46)
   system("color 53");
 else  if(a==47)
   system("color 54");
 else  if(a==48)
   system("color 56");
 else  if(a==49)
   system("color 57");
 else  if(a==50)
   system("color 60");
 else  if(a==51)
   system("color 61");
 else  if(a==52)
   system("color 62");

    else  if(a==53)
   system("color 63");

    else  if(a==54)
   system("color 64");
 else  if(a==55)
   system("color 65");
 else  if(a==56)
   system("color 67");
   else
   {
        system("cls");
        gotoxy(40,12);
        printf("Enter In Between \"1 To \"56 ");
        getch();
          goto read3_again;

   }

}
