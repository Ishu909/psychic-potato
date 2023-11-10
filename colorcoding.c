#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void player2(char str1[])
{
	int i,j,k,flag=0,right=0,wrong=0,rightbutwrong=0,c=1;
	char str2[100];
	for(i=0;i<8;i++)
	{	
		right=0;
		wrong=0;
		rightbutwrong=0;
		printf("\n");
		printf("CHANCES left : ");
		for(int z=8; z>i; z--)
			printf("|");
		printf("\n");
		scanf("%s", str2);
		for(j=0; j<strlen(str1); j++)
		{
			flag=1;
			for(k=0;k<strlen(str1);k++)
			{
				if(tolower(str1[j])==tolower(str2[k]))
				{
					if(j==k)
						right++;
					else
						rightbutwrong++;
					flag=0;
					str2[k] = '\0';
					break;
				}
			}
			if(flag)
				wrong++;
		}
		printf("right = %d\n",right);
		printf("wrong = %d\n",wrong);
		if(right==strlen(str1))
		{("rightbutwrong = %d\n",rightbutwrong);
			printf("\nY O U 	W O N \n");
			return;
		}
	}
	printf("YOU LOSE . \n BETTER LUCK NEXT TIME.............");
}

void player1()
{
	char ch,str1[100];
	int i=0;
	while(1)
	{
		ch = getch();
		if(ch=='\r')
		break;
		str1[i] = ch;
		i++;
		printf("*");
	}
	str1[i]='\0';
	printf("\nTHE HIDDEN CODE HAS BEEN WRITTEN, now guess...zzzz....\n");
	player2(str1);
}
void intro()
{
	printf("\3CODE\3GUESSING\3");
	printf("\n---------------------------------------------------------\5INSTRUCTIONS\5-----------------------------------------------------------\n");
	printf("\4 THIS GAME CONSIST OF TWO PLAYERS->PLAYER1 AND PLAYER2.\n\4 PLAYER1 WRITE THE CODE WHICH IS UNKNOWN TO PLAYER2 NOW PLAYER TWO WILL HAVE 8 CHANCES TO GUESS THE CORRECT CODE\n\4IF PLAYER TWO GUESS THE CORRECT CODE IN 8 CHANCES THEN HE/SHE WILL WIN THE MATCH\n\4 IF PLAYER2 NOT ABLE TO FIND THE CODE IN 8 CHANCE THEN HE/SHE WILL LOSE THE GAME.\n");
	printf("---------------------------------------------------------GAME HAS BEEN STARTED--------------------------------------------------");
	printf("\nENTER THE CODE TO HIDE : \n");
	return ;
}

int main ()
{
	intro();
	player1();
	return 0;
}
