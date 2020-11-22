#include <stdio.h>//main header file...
#include <stdlib.h>
#include<windows.h>
#include"conio.h"
#include"welcome.h"
#include"user.h"
#include"FILE HANDLING.h"
#include"Forgate_password.h"
#include"D:\projects in c\OPRETING SYSTEM\MORE_OPTIONS.h"//log in ki coding welcom.h me hai
#include"welcome_window.h"
void SetColor(int );
void gotoxy(int,int);
void ClearConsoleToColors(int ForgC, int BackC);

int i,j;

int main(int a,char *q[])
{
  welcome_windows();

getch();

}
void gotoxy(int a, int b)
{
    COORD x;
    x.X=a;
    x.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);


}

void SetColor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}



void ClearConsoleToColors(int ForgC, int BackC)
{
 WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);

 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

 COORD coord = {0, 0};

 DWORD count;
 CONSOLE_SCREEN_BUFFER_INFO csbi;

 SetConsoleTextAttribute(hStdOut, wColor);
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {

      FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

      FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );

      SetConsoleCursorPosition(hStdOut, coord);
 }
}



