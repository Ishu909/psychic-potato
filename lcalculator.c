#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_no()
{
int number,upper=99,lower=79;
	srand(time(NULL));
	number=(rand() % (upper-lower+1))+lower;
//	printf("%d\n",(number));
     return (number);
}
void enter()
{
	int i,love;
	char name[20],pname[20];
	printf("\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3LOVE\3CALCULATOR\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n");
	printf("ENTER YOUR NAME : \n");
	gets(name);
	printf("ENTER YOUR PARTNER NAME : \n");
	gets(pname); 
		{
	love=random_no();
	printf("YOUR LOVE %c IS --> \3 %d%c \3 \n",'%',random_no(),'%');
	if(love>=69 && love<79)
	{
		printf("BUDDY LOVE MORE ....");
	}
	else if(love>=79 && love<89)
	{
	printf("GOOD COUPLE..");
	}
	else
	{
			printf("PERFECT COUPLE..\3\3.");
	}
		}
	return ;	
}
int main ()
{
	enter();
	return 0;
}