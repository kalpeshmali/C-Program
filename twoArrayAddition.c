#include<stdio.h>
#define SIZE 10000
int main()
{
	int i,num;
	scanf("%d",&num);
	int arr1[num];
	int arr2[num];
	int arr3[num];
	for(i=0;i<num;i++)
	{
		scanf("%d ",&arr1[i]);
	}
	for(i=0;i<num;i++)
	{
		scanf("%d ",&arr2[i]);
	}
	for(i=0;i<num;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(i=0;i<num;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}
	
