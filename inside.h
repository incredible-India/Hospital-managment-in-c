void inside_newpatient(char name[],char last_name[])
{
  time_t t;
  char ch;
  time(&t);
    extern int i,j;
    system("cls");
    SetConsoleTitle("HImanshu Sharma");
    for(i=15;i<=91;i++)
    {
       gotoxy(i,3);
       printf("-");

    }
     for(i=15;i<=91;i++)
    {
       gotoxy(i,5);
       printf("-");

    }
     for(i=3;i<=23;i++)
    {
       gotoxy(15,i);
       printf("-");

    }
    for(i=3;i<=23;i++)
    {
       gotoxy(91,i);
       printf("-");

    }
    setcolor(43);
    gotoxy(40,4);
    printf("%s %s",strupr(name),strupr(last_name));
     for(i=15;i<=91;i++)
    {
       gotoxy(i,23);
       printf("-");

    }

   setcolor(56);
   gotoxy(20,7);
     printf("YOUR TOKEN NO IS...%d",rand());
     setcolor(66);
     gotoxy(20,9);
     printf("Dr. Himanshu Sharma ");
     gotoxy(20,11);
     setcolor(71);
     printf("IT WILL COME TOMORROW");
     gotoxy(20,14);
     setcolor(25);
     printf("%s",ctime(&t));

 for(i=60;i<=80;i++)
    {

       gotoxy(i,7);
        setcolor(81);
       printf("|");

    }
    gotoxy(65,8);
    setcolor(63);
    printf("1SP19CS035"); again1:
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
        goto again1;
    }


}
