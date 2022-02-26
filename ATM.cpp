#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 3F");
	float x,y;
	char ch;
	printf("Enter Initial Amount\n");
	scanf("%f",&x);
	printf("Enter\nc for credit\nd for debit\nb for balance\n ");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'c':
			printf("Enter Credit Amount\n");
			scanf("%f",&y);
			x=x+y;
			printf("New Amount=%f",x);
			break;
		case 'd':
			printf("Enter Credit Amount\n");
			scanf("%f",&y);
			if(x>=y)
			{
				x=x-y;
				printf("New Amount=%f",x);
			}	
			else
			{
				printf("Insufficient Amount in your Account");
			}
			break;
		case 'b':
			printf("Amount in Your Account=%f",x);
			break;
		default:
			printf("Choose Correct Option in Operation");
			
		}
	}
