#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],check[3];
	short int i,differance,j=0;
	printf("Enter the 5 element\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]<arr[i+1])
		{
			
			differance=arr[i+1]-arr[i];
			if(differance==1)
			{
				check[j]=arr[i];
				j++;
			}
			else
			{
				j=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",check[i]);
	}
	
	
}
