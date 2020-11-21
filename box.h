void gotoxy(int ,int);
void setcolor(int);
void health(void);
void doctoc_app(void);
void new_window(void);
void read_records(void);
void test(void);
void New_PATIENT(void);
void swastic(void);
void box(void)
{
    void (*p)(void);
    p=new_window;

  extern int i,j;
   SetConsoleTitle("WELCOME IN MANIPAL HOSPITAL");
  for(i=20;i<=86;i++)
  {
    gotoxy(i,9);
    setcolor(42);
    printf("+");


  }
  for(i=20;i<=86;i++)
  {
    gotoxy(i,20);
     setcolor(56);
    printf("+");


  }
  gotoxy(25,14);
  setcolor(79);
  printf("WELCOME TO         HOSPITAL");
  gotoxy(36,14);
   setcolor(82);
  printf("MANIPAL");
  gotoxy(25,16);
  setcolor(89);
  printf("The Second God");

getch();
system("cls");
p();




}

void new_window(void)
{
    char ch;
    SetConsoleTitle("WELCOME IN MANIPAL HOSPITAL");
    void (*p)(int,int);
    p=gotoxy;

    setcolor(70);

    printf("\n1: NEW PATIENT \n");
    setcolor(30);

    printf("\n2: TEST \n");
    setcolor(3);

    printf("\n3: DOCTOR APPOINTMENT\n");
    setcolor(26);
       printf("\n4: SEE THE RECORDS..\n");
    setcolor(46);

    printf("\n5 : SOME IMPORTANT INFO ABOUT HEALTH\n");
    setcolor(84);
    printf("\n6: EXIT");


swastic();
gotoxy(2,14);
ch=getch();
if(ch=='1')
{
    system("cls");
    New_PATIENT();
}
else if(ch=='2')
{
    system("cls");
    test();

}else if(ch=='4')
{
   system("cls");
     read_records();
}else if(ch=='3')
{
   system("cls");
  doctoc_app();
}else if(ch=='6')
{
    system("cls");
    system("color 73");
    gotoxy(40,12);
    printf("AAP KA DIN SUBH HO");
    getch();
    exit(0);


 }else if(ch=='5')
 {
     system("cls");
     health();

 }
else
{
    system("cls");
    new_window();

}


}
void swastic(void)
{
    extern int i,j;

        for(j=0;j<=28;j++)
    {
        gotoxy(60,j);
        setcolor(44);
        printf("|");

    }
    gotoxy(62,2);
    setcolor(82);
    printf("THERE ARE NO CHARGES FOR TEST LAB");
     gotoxy(62,4);
     setcolor(89);
    printf("USE MASK IN THE PATIENT WARD");
     gotoxy(62,6);
     setcolor(83);
    printf("PLEASE DO NOT PLAY LOUDE MUSIC IN THE WARD");
     gotoxy(62,8);
     setcolor(84);
    printf("PLZ DONATE THE BLOOD IF U GET A CHANCE EVER");
     gotoxy(62,10);
     setcolor(85);
    printf("EMERGENCY NO..9506891090");
    gotoxy(62,12);
    setcolor(86);
    printf("EMERGENCY NO....8604470501");




}
