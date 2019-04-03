//Write a C program to check a given array of integers (length 15) and return true if the value 5 appears 5 times and there are no 5 next to each other.
#include<stdio.h>
#define SIZE 15				//SIZE is fixed 15
int main()
{
	int count=0,i,arr[SIZE];	//variable and array declaration
	printf("Enter the %d elementg in an array\n",SIZE);  //Enter the 15 array element
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++)				//this loop is executing till length
	{
		if((arr[i]!=arr[i+1]) && (arr[i]==5))		//check the condition index position is not equal to next index position
		{
			count++;				//condition is true then increment the  count
		}
	}
	if(count==5)				//check the count is equal to 5
	{
		printf("5 Is Occuring in 5 times in an array\n");		//message printing
	}
	else						//condition is false
	{
		printf("This condition is not match in an array\n");		//message printing
	}
}
