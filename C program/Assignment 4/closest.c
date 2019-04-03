//In a SET of 10 numbers in the range 0-1000, find a number closest to 100.
#include<stdio.h>
#define SIZE 10			//array size is 10
#define FIX_ELEMENT 100		//we can check closest number to 100
int main()
{
	char i;				//variable declaration
	int arr[SIZE];		//array declaration
	short int index=0,curre_difference=100,difference;			
	printf("Enter the Array of element to 0 to 1000\n");		//Enter the array element to an array
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<SIZE;i++)			
	{
		if(arr[i]>FIX_ELEMENT)				//check the array of index is greater than 100
		{
			
			difference = arr[i]-FIX_ELEMENT;	
			if(difference<curre_difference)
			{
				curre_difference = difference;
				index = i;
			}
		}							
		else								//check the array of index is smaller than 100
		{
			difference = FIX_ELEMENT-arr[i];
			if(difference<curre_difference)
			{
				curre_difference = difference;
				index = i;
			}
			
		}
	}
	printf("%d is the closest element to 100\n",arr[index]);			//print the closest number
}
