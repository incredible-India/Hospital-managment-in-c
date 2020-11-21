void new_window(void);
void read_records(void);
 void patient_copy(char name[],char last_name[],int age,char mob[],char email[])
 {
 FILE *p;
 p=fopen("PATIENT.txt","a");
 SYSTEMTIME(t);
 GetSystemTime(&t);
 fprintf(p,"\nDATE-- %d/%d/%d\n",t.wDay,t.wMonth,t.wYear);
 fprintf(p,"\nNAME-- %s %s\t",name,last_name);
 fprintf(p," AGE-- %d\n",age);
 fprintf(p,"\nMOBILE NO-- %s\n",mob);
 fprintf(p,"\nADDRESS-- %s",email);

 fprintf(p,"\n-_-_-_-_-_-_-_-_-_-_-_-_-_---_-_-_-_-");
 fclose(p);









 }
 void read_records(void)
 {
     char o;
     int k;
      FILE *p;
     char ch;
     p=fopen("PATIENT.txt","r");
     read: reada:
     system("cls");
     gotoxy(35,12);
     setcolor(56);
     printf("1 : OPEN  ALL RECORDS");
     gotoxy(35,14);
     setcolor(59);
     printf("2 : DELETED THE RECORDS");
      gotoxy(35,16);
     setcolor(72);
     printf("3 : <-- BACK");
      gotoxy(35,18);
     setcolor(29);
     printf("4 : EXIT");
     o=getch();
     if(o=='1')
     {


      system("cls");

     if(p==NULL)
     {
         system("cls");
         system("color 72");
         gotoxy(40,12);
         printf("FILE HAS BEEN DELETED");
         gotoxy(40,16);
         printf("PRESS ANY KEY TO CONTINUE");
         getch();
         system("cls");
         new_window();

     }
     else{
     while(ch!=EOF)
     {

         printf("%c",ch);
         ch=fgetc(p);
     }
     fclose(p);
     getch();
     goto read;
     }

     }
     else if(o=='2')
     {
           k=remove("PATIENT.txt");
         if(k==0)
         {
             system("cls");
             gotoxy(40,12);
             system("color 03");
             printf("SUCCESSFULLY DELETED...");


         }else{

          system("cls");
             gotoxy(40,12);
             system("color 03");
             printf("FILE ALREDY DELETED");

         }
                getch();
                goto reada;
     }else if(o=='3')
     {

         system("cls");
         new_window();

     }else if(o=='4')
     {
           system("cls");
           gotoxy(40,12);
           system("color 73");
           printf("THANX FOR USING THIS");


     }

     else{

        system("cls");
        printf("\a");
        read_records();


     }


 }
 void doctor(void)
 {
  FILE *p;
  p=fopen("doc1.txt","r");
  char ch[50];
  if(p==NULL)
  {

      system("cls");
      system("color 70");

      printf("ERROR ");
      getch();
       system("cls");
         new_window();




  }
  while(fgets(ch,9,p)!=NULL)
        {


            printf("%s",ch);
        }

fclose(p);

 }
void health(void)
{

    char ch;
    system("cls");
    gotoxy(25,10);
    setcolor(63);
    printf("1: FEVER");
    gotoxy(60,10);
    setcolor(86);
    printf("2: COVID-19");
     gotoxy(2,20);
    setcolor(75);
    printf("<Enter> <-- Go back");

     gotoxy(80,20);
    setcolor(82);
    printf("<Esc> Exit");

    ch=getch();
    if(ch=='1')
    {
        FILE *p;
        p=fopen("fever.txt","r");
        char c[1000];
         system("cls");
        if(p==NULL)
        {
            system("cls");
            gotoxy(40,12);
            printf("SERVER ERROR,,,.....");
            getch();
            system("cls");
            health();


        }


        while(fgets(c,10,p)!=NULL)
        {

            printf("%s",c);

        }
        fclose(p);
        getch();
        system("cls");
        health();




    }else if(ch=='2')
    {

        FILE *q;
        q=fopen("corona.txt","r");
        char c[1000];
        system("cls");
        if(q==NULL)
        {
            system("cls");
            gotoxy(40,12);
            printf("SERVER ERROR,,,.....");
            getch();
            system("cls");
            health();


        }

        while(fgets(c,10,q)!=NULL)
        {

            printf("%s",c);

        }
        fclose(q);
        getch();
        system("cls");
        health();


    }else if(ch==ENTER)
        {

            system("cls");
            new_window();


        }else if(ch==ESC)
        {
        system("cls");
        system("color 06");
        gotoxy(40,12);
        printf("AAPKA KA DIN MAGAL_MAY HO");
        getch();
        exit(0);



        }
    else
    {


        system("cls");
        health();
    }






}
