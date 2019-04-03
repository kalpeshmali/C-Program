//Write a C program to check if it is possible to add two integers to get the third integer from three given integers.
#include<stdio.h>
int main()
{
	int num1,num2,num3;		//variable declaratiom
	printf("Enter the 3 number\n");	//enter the 3 number
	scanf("%d%d%d",&num1,&num2,&num3);

	if(num1+num2 == num3)       //check the condition num1 and num2 is equal to num3
	{
		printf("Num1 =%d and Num2 = %d is \n addition is Num3=%d\n",num1,num2,num3);	//printf the message
		return 0;
	}
	else if(num1+num3==num2)	//check the condition num1 and num3 is equal to num2
	{
		printf("Num1 =%d and Num3 = %d is \n addition is Num2=%d\n",num1,num3,num2);	//print the message
		return 0;
	}
	else if(num2+num3==num1)	//check the condition num2 and num3 is equal to num1
	{
		printf("Num2 =%d and Num3 = %d is	\n addition is Num1=%d\n",num2,num3,num1);	//print the message
		return 0;
	}
	else
	{
		printf("It is not possible to add two number\n")
		return 0;
	}
}
