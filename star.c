#include<stdio.h>
//#define main() main
int main()
{
	int num,i,j,k;
	printf("Enter the Nuumber\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=0;j<=num-(i+1);j++)
		{
			printf(" ");
		}
		for(k=0;k<(2*i)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");	
		}
		for(k=0;k<(num-i)*2-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
