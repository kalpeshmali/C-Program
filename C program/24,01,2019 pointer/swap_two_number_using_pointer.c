#include<stdio.h>  //Header file
int swap(int *ptr1,int *ptr2)	//swapping a two number using ptr pointer variable
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
int main()
{
	int num1,num2;		//variable diclaration
	printf("Enter the Two number\n");	//Entering two number
	scanf("%d%d",&num1,&num2);
	
	printf("Before Swapping The Numbers\n num1 = %d\n num2 = %d\n\n",num1,num2);	//ptint the value of Num1 and Num2
	swap(&num1,&num2);							//Swap function calling
	printf("After swapping The Number \n num1 = %d \n num2 = %d\n\n",num1,num2);	//after swapping print the value of num1 and Num2 

}
