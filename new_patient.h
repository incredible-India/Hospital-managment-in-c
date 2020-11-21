#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void read_records(void);
void inside_newpatient(char [],char []);
 void doctor(void);
void test(void);
  void patient_copy(char name[],char last_name[],int age,char mob[],char email[]);
 struct users
{
  char user_name[40],user_mob[12],user_email[40];
  float age;


};
void New_PATIENT(void)
{

 struct users  name,mob,email,last_name,age1;
  char c;
  system("cls");
  gotoxy(40,12);
  setcolor(91);
  printf("WELCOME TO MANIPAL HOSPITAL");
  gotoxy(40,14);
  printf("HIT <ENTER> TO CONTINUE....... ");
  c=getch();

  if(c==ENTER)
  { a2:a3:
      system("cls");
      setcolor(95);
      gotoxy(16,5);
      printf("First Name :");
     setcolor(11);
      gets(name.user_name);

      setcolor(95);
      gotoxy(70,5);
      printf("Last Name :");
      setcolor(11);
      gets(last_name.user_name);
      gotoxy(16,10);
      setcolor(95);
      printf("MOBILE NO :");
      setcolor(11);
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
      setcolor(95);
      gotoxy(70,10);
      printf("AGE :");
      setcolor(11);
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
         setcolor(95);
      gotoxy(16,15);
      printf("ADDRESS :");
     setcolor(11);
      fflush(stdin);
      gets(email.user_email);
    patient_copy(name.user_name,last_name.user_name,age1.age,mob.user_mob,email.user_email);
     inside_newpatient(name.user_name,last_name.user_name);
  }
  else
  {
      system("cls");
      printf("\a");
      New_PATIENT();
  }






}

void test(void)
{
    char ch;

    extern int i,j;
    for(i=10;i<=96;i++)
    {
        gotoxy(i,5);
        setcolor(86);
        printf("-");


    }
     for(i=10;i<=96;i++)
    {
        gotoxy(i,10);
        setcolor(87);
        printf("-");


    }
     for(i=10;i<=96;i++)
    {
        gotoxy(i,15);
        setcolor(84);
        printf("-");


    }
     for(i=10;i<=96;i++)
    {
        gotoxy(i,20);
        setcolor(83);
        printf("-");


    }
    for(j=5;j<=20;j++)
    {
        gotoxy(52,j);
        setcolor(86);
        printf("|");


    }
    for(j=5;j<=20;j++)
    {
        gotoxy(10,j);
        setcolor(83);
        printf("|");


    }
for(j=5;j<=20;j++)
    {
        gotoxy(96,j);
        setcolor(82);
        printf("|");


    }

gotoxy(12 ,7.5);
setcolor(43);
printf("1: BLOOD TEST (RS\\ 500)");
gotoxy(56 ,7.5);
setcolor(41);
printf("2: H.I.V AIDS (RS\\ 2900)");
gotoxy(56 ,12);
setcolor(41);
printf("3: CORONA CHECK_UP (NOT DONE HERE)");
gotoxy(56 ,18);
setcolor(44);
printf("4: THIROIDS (RS\\ 200)");
gotoxy(12 ,12);
setcolor(52);
printf("5: COLONOSCOPIC (RS\\ 8900)");
gotoxy(12 ,18);
setcolor(59);
printf("6: PILES (RS\\ 1900)");
gotoxy(34,3);
setcolor(20);
printf("ALL THE REPORT WILL BE GIVEN AFTER 7 hr..");
gotoxy(40,25);
setcolor(20);
printf("<ENTER> TO CONTINUE");
gotoxy(1,25);
setcolor(19);
printf("<ECE> TO EXIT");
gotoxy(70,25);
setcolor(19);
printf("<BACK_SPACE> <-- GO BACK");
ch=getch();
if(ch==ENTER)
{
    system("cls");
    extern int i,j;
    for(i=15;i<=91;i++)
    {
       gotoxy(i,3);
       printf("*");

    }
     for(i=15;i<=91;i++)
    {
       gotoxy(i,5);
       printf("*");

    }
     for(i=3;i<=23;i++)
    {
       gotoxy(15,i);
       printf("*");

    }
    for(i=3;i<=23;i++)
    {
       gotoxy(91,i);
       printf("*");

    }
    for(i=15;i<=91;i++)
    {
       gotoxy(i,23);
       printf("*");

    }
     setcolor(43);
    gotoxy(40,4);
    printf("DR.HIMANSHU SHARMA");
    gotoxy(20,6);
    printf("YOUR REPORT WILL BE GIVEN IN EVENING AFTER 4.00 PM");
     gotoxy(25,14);
  setcolor(79);
  printf("WELCOME TO         HOSPITAL");
  gotoxy(36,14);
   setcolor(86);
  printf("MANIPAL");
  gotoxy(25,16);
  setcolor(49);
  printf("The Second God");
  again2:
   gotoxy(80,25);
setcolor(20);
printf("<ENTER> TO CONTINUE");
gotoxy(1,25);
setcolor(19);
printf("<ECE> TO EXIT");
     ch=getch();
    if(ch==ENTER)
    {
        system("cls");
        new_window();

    }else if(ch==ESC)
    {
        system("cls");
        system("color 72");
        gotoxy(40,12);
        printf("AAP KA DIN SUBH HO");
        getch();
        exit(0);
    }
    else{
        goto again2;
    }


}else if(ch==ESC)
{
    system("cls");
    gotoxy(40,12);
    system("color 71");
    printf("JALD HI BIMAR PADKE HME SEWA KA MOUKA DE");
    getch();
    exit(0);


}else if(ch==BKSP)
{
    system("cls");
    new_window();


}
else{

    system("cls");
    printf("\a");
    test();
}



}
void doctoc_app(void)
{
system("cls");
doctor();
getch();
system("cls");
gotoxy(2,12);
setcolor(52);
printf("We are extremely sorry for \"All the doctor cannot came due to the construction of hospital\"");
gotoxy(40,14);
setcolor(12);
printf("KINDLY MEET OUR NEXT BRANCH GHAZIPUR");

{
     char ch;
     again:
    gotoxy(2,20);
    printf("<Enter> <- go back");
    gotoxy(80,20);
    printf("<Esc> To exit");
    ch=getch();
    if(ch==ENTER)
    {
        system("cls");
        new_window();

    }else if(ch==ESC)
    {
        system("cls");
        system("color 72");
        gotoxy(40,12);
        printf("AAP KA DIN SUBH HO");
        getch();
        exit(0);



    }else{

        goto again;

    }
}




}
