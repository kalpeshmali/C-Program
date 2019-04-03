// Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
#include<stdio.h>
#define SIZE 10	//size is 10
int main()
{
	int arr[SIZE];		//defining array
	short int i;
	printf("Enter the 10 number\n",SIZE);		//Entering 10 element in array
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE-2;i++)
	{
		if((arr[i]==arr[i+1]) && (arr[i]==arr[i+2]))		//check the condition index first ,second and third is same
		{
			printf("Tripple is present in array .No is %d\n",arr[i]);	//message is printing this array is tripple
			return 0;
		}
		
	}
	printf("Triple is not present in array\n");		//array is not tripple
	return 0;
}
