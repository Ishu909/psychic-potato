#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_no()
{
	int number,upper=3,lower=1;
	srand(time(NULL));
	number=(rand() % (upper-lower+1))+lower;
	//printf("%d\n",(number));
     return (number);
}
void start()
{
	while(1)
	{
		system("cls");
		//user face
		char name[20];
		int age;
		printf("--------------------  R O C K \3 P A P E R \3 S C I S S O R S \3 ----------------------\n");
		printf("\4 PLEASE ENTER YOUR NAME :\n\4");
		scanf(" %[^\n]s",name);
		printf("CHOOSE 1 FOR ROCK\n");
		printf("CHOOSE 2 FOR PAPER\n");
		printf("CHOOSE 3 FOR SCISSORS\n");
		printf("*******************************************************************************************************************************");
		printf("\nNOTE --> \6NO EXTRA CHANCE IS GIVEN IF YOU ENTER THE WRONG NUMBER\6\n");
		printf("*******************************************************************************************************************************");

		//game_fuction
		int n,rn,l=0,w=0,i=0, b;
		while(i<3)
		{
			fflush(stdin);
	
		printf("\nENTER THE NO : ");
		scanf("%d",&n);
		if(n==1)
		printf(" YOU CHOOSE --> ROCK\n");
		if(n==2)
		printf(" YOU CHOOSE --> PAPER\n");
		if(n==3)
		printf(" YOU CHOOSE --> SCISSORS\n");
	    rn=random_no();
		if(rn==n)
		printf("D R A W  ! ! \n");
		
	// condition for rock:	
		else if(n==1&&rn==2)
		{
			printf(" OPPONENT CHOOSE --> PAPER -->\n");
			printf("Y O U	L O O S E  ! !\n");
			l++;
		}
		else if(n==1&&rn==3)
		{
			printf("OPPONENT CHOOSE --> SCISSORS --> \n");
			printf("Y O U	W I N  ! !\n");
		//	BEEP(3000,3000);
			w++;
		}
	// condition for paper:
		else if(n==2&&rn==1)
		{
			printf("OPPONENT CHOOSE --> STONE -->\n");
			printf("Y O U	W I N  ! ! \n");
			w++;
		}
		else if(n==2&&rn==3)
		{
			printf("OPPONENT CHOOSE --> SCISSORS -->\n ");
			printf("Y O U	L O S E  ! !\n");
			l++;
		}
		
	// condition for scissors:
		else if(n==3&&rn==1)
		{
			printf("OPPONENT CHOOSE --> STONE -->\n");
			printf("Y O U	L O S E  ! !\n");
			l++;
		}
		else if(n==3&&rn==2)
		{
			printf("OPPONENT CHOOSE --> PAPER --> \n");
			printf("Y O U	W I N  ! !\n");
			w++;
		}
		else
		printf("W R O N G	N U M B E R --> E N T E R  T H E  V A L I D  N U M B E R . . . ");
		i++;
		//exit(3);
		}
		if(l>w)
		{
		printf("\nYOUR POINTS = %d & OPPONENTS POINTS = %d \n ",w,l);
		printf("\t\t ------------------YOU LOSE THE MATCH----------------------");
	    }
		if(l<w)
		{
		printf("\nYOUR POINTS = %d & OPPONENTS POINTS = %d \n ",w,l);
		printf("\t\t ------------------YOU WON THE MATCH----------------------");
	    }
		if(l==w)
		{
		printf("\nYOUR POINTS = %d & OPPONENTS POINTS = %d \n ",w,l);
		printf("\t\t ------------------MATCH IS DRAW----------------------");
	    }
		printf("\n\nPress 0 to end the game, 1 otherwise : ");
		scanf("%d", &b);
		if(!b)
		{
			printf("\n\n\t\tthank you!!");
			return;
		}
	}
}
int main ()
{
//	begin();
	start();
	return 0;
}