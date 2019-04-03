/* Write a C program to rotate the elements of a given array of integers (length 10) with respect to user’s input (direction and step) and return the new array. Expected Output:
Elements in original array are: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100.
User input: Direction: right, step: 2
Elements in new array are: 90, 100, 10, 20, 30, 40, 50, 60, 70, 80.*/
#include<stdio.h>		//Header file define
#include<stdlib.h>
#define SIZE 10			//lenght is declare
int i,step,j,temp;
void print_array(int arr[])		//printing the array element
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void right_rotate(int arr[])		//element is rotate to right
{
	scanf("%d",&step,printf("Enter the Step\n"));
	for(i=0;i<step;i++)
	{
		temp=arr[SIZE-1];
		printf("temp= %d\n",temp);
		for(j=SIZE-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
}
void left_rotate(int arr[])			//element is rotate to left
{
	scanf("%d",&step,printf("Enter the Step\n"));
	for(i=0;i<step;++i)
	{
		temp=arr[0];
		for(j=0;j<SIZE-1;++j)
		{
			arr[j]=arr[j+1];
		}
		arr[j]=temp;
	}
	
}
int main()
{
	int arr[SIZE],i,choice;		//array and variable declaration
	printf("Enter the Array element\n");	//Entering the array element 
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&choice,printf("\n 1.Right \n.2.Left\n"));
	switch(choice)
	{
		case 1: right_rotate(arr);
				print_array(arr);
			 	break;
			 	
		case 2:	left_rotate(arr);
				print_array(arr);
				break;
	}
	
return 0;
}

