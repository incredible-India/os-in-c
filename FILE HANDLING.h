 void get_help(void);
void user_copy(char ch[],char ln[],float age,char mobi[],char emailid[])
{
   SYSTEMTIME t;
   GetSystemTime(&t);

  FILE *p;
  p=fopen("USERINFO.txt","a");
  fprintf(p,"\n \n");
  fprintf(p,"%d-%d-%d",t.wDay,t.wMonth,t.wYear);
  fprintf(p,"\n ");
  fprintf(p,"\nNAME : %s ",strupr(ch));
  fprintf(p," %s\n",strupr(ln));
  fprintf(p,"\nAge: %f\n",age);
  fprintf(p,"\nUser MOBILE NO : %s\n",mobi);
  fprintf(p,"\nEmail id : %s",emailid);
  fprintf(p,"\n");
  fprintf(p,"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
  fclose(p);






}
void Readfile(void)
{

    FILE *p;
  p=fopen("USERINFO.txt","r");
  char ch;
  if(p==NULL)
  {
      system("cls");
      system("coloe 71");
      gotoxy(40,12);
  printf("Error File Not Found");
  getch();
  }

  while(!feof(p))
  {
      printf("%c",ch);
      ch=fgetc(p);


  }
    fclose(p);

}
void REadagain(char c[],char g[])
{

  FILE *p;
  p=fopen("FORGATE_PASSWORD.txt","a");
  fprintf(p,"\n");
  fprintf(p," \n%s\n ",c);
  fputs(g,p);
  fprintf(p,"------------__________------------_____________");
  fclose(p);


}
void TermandConditions(void)
{
    FILE *p;
    char ch;
    p=fopen("tearms.txt","r");
    if(p==NULL)
    {
        system("cls");
        gotoxy(40,12);
        system("color 71");
        printf("File Not Found");
        getch();
        get_help();

    }
    while(!feof(p))
    {

        printf("%c",ch);
        ch=fgetc(p);
    }
    fclose(p);



}
void source_code(void)
{
    FILE *p;
    p=fopen("source_code.txt","r");
    char ch[23];
    if(p==NULL)
    {
        system("cls");
        system("color 73");
        printf("File Not Found");
        getch();
        exit(1);

    }
    while(fgets(ch,10,p)!=NULL)
    {
        printf("%s",ch);
    }


}
void instruct(void)
{
   FILE *p;
    p=fopen("get instruct.txt","r");
    char ch[23];
    if(p==NULL)
    {
        system("cls");
        system("color 73");
        printf("File Not Found");
        getch();
        exit(1);

    }
    while(fgets(ch,10,p)!=NULL)
    {
        printf("%s",ch);
    }
}
 void instruction(void)
 {

       FILE *p;
  p=fopen("instruction.txt","r");
  char ch;
  if(p==NULL)
  {
      system("cls");
      system("coloe 71");
      gotoxy(40,12);
  printf("Error File Not Found");
  getch();
  }

  while(!feof(p))
  {
      printf("%c",ch);
      ch=fgetc(p);


  }
    fclose(p);

 }
