#include<stdio.h>
int main()
{
	int num,key;
	do
	{
	
	printf("\nEnter the number\n");
	scanf("%d",&num);
	printf("Enter the key\n");
	scanf("%d",&key);
	
	if(num+key <= 9)
	{
		printf("%d",num+key);
	}
	else
	{
	num=(num+key)%10;
	printf("%d",num);
	}
	}while(1);
}
