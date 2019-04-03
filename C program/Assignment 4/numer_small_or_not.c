/* Write a C program to find the larger from two given integers.
 However if the two integers have the same remainder when divided by 7, then the return the smaller integer. If the two integers are the same, return 0	*/
#include<stdio.h>
#define SIZE 7		//defining fix size
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2,printf("Enter the two number\n"));		//entering two number
	if(num1>num2)								//condition check number 1 greater then number 2
	{
		if((num1%SIZE) == (num2 %SIZE))			//check the remainder is same
		{
			printf("Num2  %d is smaller\n",num2);	//message is printing num2 is smaller
		}
		else
		{
			return 0;					//condition is false return 0
		}
	}
	else
	{
		if((num1%SIZE) == (num2 %SIZE))			//check the remainder is same
		{
			printf("Num1  %d is smaller\n",num1);	//message is printing num1 is smaller
		}
		else
		{
			return 0;		//condition is false return 0
		}
	}
	return 0;
}
