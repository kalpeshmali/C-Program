#include<stdio.h>
int main()
{
	int i=0,arr[5],num,j,temp=0;
	printf("Enter the Number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(arr[j]>=arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}

