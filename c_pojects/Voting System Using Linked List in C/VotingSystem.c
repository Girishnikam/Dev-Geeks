#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
typedef struct voter_information
{
    char prn_no[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
} node;

node *head;
node *space,*start=NULL;
node *search(char x[],char y[],char z[],node *,int *);
node *voter_insert(node *);
node *main_logs(node *);
 void admin();
 void winner();
 	void exi();
 	void voting();
 	void not_again();
 	void stop();
 	void show();


int count=0,R=3,vote=0;
int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;
int main()
{
	while(1){

    system("cls");
    printf("\n\n\n");
    printf("\t            * WELCOME TO VOTING PORTAL *        \n\n");

   // printf("\t           *******        \n\n\n\n\n");
    printf("        \t\t *PRESS 1 TO ENTER VOTING MENU*    \n\n\n");
    int BB;

    scanf("%d",&BB);
    if(BB==1)
    {
      start=  main_logs(start);
    }

}
    return 0;
}

node *main_logs(node *start)
{
    system("cls");
    printf("\n\n\n");
    printf("        \t\t\t1. VOTERS ENTRY    \n");
    Sleep(300);
    printf("        \t\t\t2. ADMIN PANEL    \n");
    Sleep(300);
    printf("        \t\t\t3. RESULTS         \n");
    printf("    \t YOU NEED TO VALIDATE YOUR IDENTITY FOR VOTING   \n\n\n");
    Sleep(500);
    printf("    \t **ENTER YOUR CHOICE**\n\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
       start= voter_insert(start);
    }
    if(T==2)
    {
      admin();
    }
    if(T==3)
    {
      winner();
    }
    if(T!=1||T!=2||T!=3)
    {
    	main_logs(start);
	}


    return start;
}


node *voter_insert(node *start)
{
	int UNIVERSAL=0;
int *z;
 z = &UNIVERSAL;
     node *temp;
     char name[50],birth_date[15],prn_no[20];
     system("cls");
     printf("\n\n\n\n");
     printf("\t YOU CAN VOTE AFTER YOUR PRN NO., YOUR NAME AND YOUR DATE OF BIRTH MATCHES\n\n");
     Sleep(300);
     printf("\t\t\t IF YOU ENTER WRONG DETAILS %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
     Sleep(300);
     printf("\t\tPlease \n");
     Sleep(300);
     printf("\t\t\tENTER YOUR PRN NO.  ");
     gets(prn_no);
     gets(prn_no);
     printf("\t\t\tENTER YOUR NAME   ");
     gets(name);
     printf("\t\t\tENTER YOUR BIRTH DATE  (dd-mm-yyyy)");
     gets(birth_date);
     temp=(node *)malloc(sizeof(node));
     strcpy(temp->prn_no,prn_no);
     strcpy(temp->name,name);
     strcpy(temp->birth_date,birth_date);
     temp->next=NULL;
     head=temp;
     while(temp!=NULL)
     {
         if((strcmp(temp->prn_no,"122201")==0&& strcmp(temp->name,"GIRISH NIKAM")==0 &&strcmp(temp->birth_date,"29-03-2003")==0) ||
         (strcmp(temp->prn_no,"122202")==0&& strcmp(temp->name,"ATHARVA THOKAL")==0 &&strcmp(temp->birth_date,"03-04-2003")==0)||
         (strcmp(temp->prn_no,"122203")==0&& strcmp(temp->name,"AJINKYA GHUSARKAR")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122204")==0&& strcmp(temp->name,"SOURABH SHINTRE")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122205")==0&& strcmp(temp->name,"VIRENDRA SHELKE")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122206")==0&& strcmp(temp->name,"PRATHAMESH THAKRE")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122207")==0&& strcmp(temp->name,"DURGESH DURVE")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122208")==0&& strcmp(temp->name,"SOHAM DEOOLKAR")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122209")==0&& strcmp(temp->name,"SNEHAVARDHAN KANKAL")==0 &&strcmp(temp->birth_date,"01-06-2003")==0)||
         (strcmp(temp->prn_no,"122210")==0&& strcmp(temp->name,"BHUSHAN DESHMUKH")==0 &&strcmp(temp->birth_date,"01-06-2003")==0))

         {
         	R=3;
         	start=search(temp->prn_no,temp->name,temp->birth_date,start,&UNIVERSAL);

         	if(UNIVERSAL==0)
            {
            	 voting();
			}
            else
             {
             	not_again();
			 }
           }
         else
            {
              R--;
         if(R==0)
         {
             stop();
             break;
         }
         printf("\n\n\n\n");
         printf("\n YOUR PRN NO or NAME or DATE OF BIRTH IS WRONG\n\n");
         Sleep(300);
         printf("\t\t\tPLEASE RE-ENTER\n\n");
         Sleep(300);
         system("PAUSE");
        start= main_logs(start);
            }
            temp=temp->next;
     }
     return start;
}


void voting()
{
     system("cls");
    printf("\n\n\n\n");
    printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
    Sleep(300);
    printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1.OM BAGUL                    1.Fish\n");
    Sleep(300);
    printf("\t\t\t 2.SAI KARDILE                 2.Boat\n");
    Sleep(300);
    printf("\t\t\t 3.KAVISH BADERA               3.Motorcycle\n");
    Sleep(300);
    printf("\t\t\t 4.TEJAS THORAT                4.Broomstick\n");
    Sleep(300);
    printf("\t\t\t 5.MANSI THOKAL             5.Wheel\n\n\n");



       int B,j;
       //printf("\t\t\t PLEASE, \n");
       printf("\t\t\t PLEASE ENTER YOUR CHOICE \n");
       for(j=1;j<=1;j++)
       {
           scanf("%d",&B);

           if(B==1)
           {
               vote1++;
               printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO OM BAGUL\n");
               break;

           }
           if(B==2)
           {
               vote2++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO SAI KARDILE\n");
               break;

           }
           if(B==3)
           {
               vote3++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO KAVISH BADERA\n");
               break;

           }
           if(B==4)
           {
               vote4++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO TEJAS THORAT\n");
               break;
           }
           if(B==5)
           {
               vote5++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MANSI THOKAL\n");
               break;
           }
            if(B!=1||B!=2||B!=3||B!=4||B!=5)
           {
           	printf("\n\t\t*** INVALID CHOICE ENTERED****\t\t\n");
           	printf("\n\t\t\tENTER AGAIN\t\t\t\n");
		   }



       }
	   printf("\n\n****THANK YOU***\n\n");
	   printf("PRESS ANY KEY");
	   getch();
}

 void admin()
 {
     int B;
     printf("\n\n\n\n");
     printf("\t\t\t\t\tENTER YOUR PASSWORD TO UNLOCK ADMIN PANEL\n\n");
     scanf("%d",&B);
     if(B==1234)
     {
         show();

     }
     else
     {
         printf("WRONG PASSWORD\n");
     }
 }

  void show()
  {
  	int G;
      system("cls");

      printf("\n\n\n\n");
      printf("\t\t\tPRESENT VOTE COUNT :\n\n");
      Sleep(500);
      printf("\t\t\t  OM BAGUL IS ON     %d VOTES\n",vote1);
      Sleep(500);
      printf("\t\t\t  SAI KARDILE IS ON     %d VOTES\n",vote2);
      Sleep(500);
      printf("\t\t\t  KAVISH BADERA IS ON      %d VOTES\n",vote3);
      Sleep(500);
      printf("\t\t\t  TEJAS THORAT IS ON     %d VOTES\n",vote4);
      Sleep(500);
      printf("\t\t\t  MANSI THOKAL IS ON     %d VOTES\n\n\n\n",vote5);
      Sleep(500);


      printf("\t\t\t\t\tENTER ANY KEY FOR MAIN MENU\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\t\tENTER THE SPECIAL PASSWORD TO CLOSING VOTING PORTAL\n ");
    scanf("%d",&G);
    if(G==4321)
    exi();
    else
    main_logs(start);

  }

   void winner()
   {
       system("cls");
       printf("\n\n\n\n");
       if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
        printf("\t\t\tTHE CURRENT WINNER IS OM BAGUL WITH %d VOTES\n\n\n\n",vote1);

       if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
        printf("\t\t\tTHE CURRENT WINNER IS SAI KARDILE WITH %d VOTES\n\n\n\n",vote2);

        if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
        printf("\t\t\tTHE CURRENT WINNER IS KAVISH PADERA WITH %d VOTES\n\n\n\n",vote3);

        if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
        printf("\t\t\tTHE CURRENT WINNER IS TEJAS THORAT WITH %d VOTES\n\n\n\n",vote4);

        if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
        printf("\t\t\tTHE CURRENT WINNER IS MANSI THOKAL WITH %d VOTES\n\n\n\n",vote5);

        printf("\t\t\t\tENTER ANY KEY FOR MAIN LOG\n\n");
        getch();
        main_logs(start);

   }

   void stop()
   {
       system("cls");

       printf("\n\n\n\n");
       printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
       Sleep(500);
       printf("\t\t\t PLEASE TRY AGAIN AFTER A MOMENT\n\n\n");
       Sleep(500);
       printf("\t\t\t * * THANK YOU! * *  \n\n\n");
       Sleep(500);
       printf("PRESS ANY KEY");
       getch();

   }

   void not_again()
   {
        int A;
		system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t        *YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY*       \n\n\n");
        Sleep(300);
        printf("\t\t\t        *YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE*     \n\n\n");
        Sleep(300);
        printf("\t\t\t TO SEE PRESENT WINNER PRESS ONE(1) OR ENTER ANY KEY FOR MAIN MENU\n\n");
        Sleep(300);

        scanf("%d",&A);
        if(A==1)
        {
            winner();
        }
        else
        {
            main_logs(start);
        }

   }

   void exi()
   {
       system("cls");

       printf("\n\n\n\n\n");
       Sleep(500);
       printf("\t\t\t        *YOU ARE NOW EXITING THE PORTAL*       \n\n\n");
       Sleep(1000);
       printf("\t\t\t * * THANK YOU FOR USING OUR PLATFORM FOR VOTING * *  \n\n\n");
       Sleep(1000);
       exit(0);
   }
node *search(char x[],char y[],char z[],node *start,int *Y)
{
	 *Y=0;
  node *t,*space;
  if(start==NULL)
  {
      space=(node*)malloc(sizeof(node));
     strcpy(space->prn_no,x);
     strcpy(space->name,y);
     strcpy(space->birth_date,z);

      start=space;
      space->next=NULL;

  }
  else
  {
      t=start;
      while(t!=NULL)
       {
          if((strcmp(t->prn_no,x)==0&& strcmp(t->name,y)==0 &&strcmp(t->birth_date,z)==0))
          {
          	*Y=1;

          	break;
          }
              t=t->next;
    	}

          if(*Y==0)
          {

          	space=(node*)malloc(sizeof(node));

       		strcpy(space->prn_no,x);

       		strcpy(space->name,y);

       		strcpy(space->birth_date,z);
	        t=space;
    	    space->next=NULL;

    	}
  }
  return start;
 }