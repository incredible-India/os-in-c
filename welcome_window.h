void game(void);
void number_guess(void);
 void instruction(void);
void screen_saver(void);

void welcome_window(void)
{
    extern int i,j;
    char ch;
    system("cls");
    for(i=32;i<=37;i++)
    {
        for(j=5;j<=8;j++)
        {
            if(i==32||i==37||j==0||j==8)
            {gotoxy(i,j);
            printf("*");}
            else
            printf(" ");
        }
        printf("\n");
    }
    gotoxy(28,9);
    printf("1: PLAY GAME");
    for(i=32;i<=37;i++)
    {
        for(j=12;j<=16;j++)
        {
            if(i==32||i==37||j==12||j==16)
            {gotoxy(i,j);
            printf("*");}
            else
            printf(" ");
        }
        printf("\n");
    }
    gotoxy(29,17);
    printf("2:RESUME MAKER");
    for(i=71;i<=76;i++)
    {
        for(j=12;j<=16;j++)
        {
            if(i==71||i==76||j==12||j==16)
            {gotoxy(i,j);
            printf("*");}
            else
            printf(" ");
        }
        printf("\n");
    }
    gotoxy(68,17);
    printf("3: MORE INFO");
    for(i=71;i<=76;i++)
    {
        for(j=5;j<=8;j++)
        {
            if(i==71||i==76||j==0||j==8)
            {gotoxy(i,j);
            printf("*");}
            else
            printf(" ");
        }
        printf("\n");
    }
    gotoxy(70,9);
    printf("4: EXIT");
    ch=getch();
    if(ch=='1')
    {
        game();

    }else if(ch=='2')
    {

    }else if(ch=='3')
    {

    }else if(ch=='4')
    {

    }else
    {

       printf("\a");
        welcome_window();
    }
}
void game(void)
{
    system("cls");
SetColor(82);
gotoxy(40,10);
printf("1: NUMBER GUSSING GAME");
gotoxy(40,14);
printf("2: MAKE YOUR NAME AS SCREEN SAVER");
gotoxy(40,18);
printf("3: <-- BACK");
{
    char ch;
    ch=getch();
    if(ch=='1')
    {
        number_guess();
    }
    else if(ch=='2')
    {
      //  screen_saver();
    }else if(ch=='3')
    {
        welcome_window();
    }else
    {
        printf("\a");
        game();
    }
}


}
void number_guess(void)
{
int z;
system("cls");
gotoxy(40,10);
printf("1: <-> PLAY GAME");
SetColor(44);
gotoxy(40,12);
printf("2: HOW TO PLAY THIS GAME");
SetColor(32);
gotoxy(40,14);
printf("3 : <-- BACK");
{
    extern int i;
char ch;
ch=getch();
if(ch=='1')
{

  system("cls");
  gotoxy(40,12);
  printf("ENTER THE HIDDEN NO...");
  gotoxy(40,13);
  scanf("%d",&z);
  while(i==1)
  {
       i=i+1;
      if(0<=z<=5)
  {
      printf("NO IS TO LOW PLZ INCRESE IT\t your life %d",i);
      return ;

  }else if(6<=z<=10)
  {
      printf("Low no INCREASE SOME NO..\t your life %d",i);
      return ;
  }else if(11<=z<=13)
  {
      printf("ALMOSTLY REACHED JUST INCREASE LITTLE\t your life %d",i );
  }else if(15<=z<=20)
  {
      printf("no . high just decrease some no...\t your life %d",i);
  }else if(z==14)
  {
      system("color 0a");
      printf("YOU WON IN %d CHANCE",i);
  }else if(i==10)
  {
      printf("GAME OVER YOU LOSE!");
      break;
  }
  getch();
  printf(" press <1> TO CONTINUE");
  printf("PRESS <2> TO <-- BACK");
  printf("<ESC> TO EXIT");

 }
}else if(ch=='2')
{
  instruction();
 getch();
 number_guess();
}else if(ch=='3')
{
   game();
}else
{
    printf("\a");
    number_guess();
}

}
}
