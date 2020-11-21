#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include"box.h"
#include"new_patient.h"
#include"file.h"
#include"inside.h"
void gotoxy(int,int);
void setcolor(int);

int i,j;
struct stu

{

   char name[90];
   int a;
   float b;



};
int main()
{
   box();
  getch();
}
void gotoxy(int a,int b)
{
      COORD x;
      x.X=a;
      x.Y=b;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);



}
void setcolor(int ForgC)
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
