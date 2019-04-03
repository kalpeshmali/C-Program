#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num,min,count=0;
	int arr[num];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d ",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<num;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];	
		}	
	}
	for(i=0;i<num;i++)
	{
		if(min==arr[i]);
		{
			count++;
		}
	}
	printf("%d",count);
return 0;
}
