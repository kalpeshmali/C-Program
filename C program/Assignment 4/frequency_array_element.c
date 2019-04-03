#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE],i,j,k=0,freq[SIZE],count;
	printf("Enter the number\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		count=1;	
		for(j=i+1;j<SIZE;j++)
		{
			
			if(arr[i]==arr[j])
			{
				count++;
			}
			
		}
		freq[i]=count;		
	}
	for(i=0;i<SIZE;i++)
	{
		if(freq[i]==3)
		{
			printf("Tripple is present for %d\n",arr[i]);
		}
	}
	
}
