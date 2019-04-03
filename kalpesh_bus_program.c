#include<stdio.h>
int main()
{
	int num;
	
	
	
	printf("Enter the number\n");
	scanf("%d",&num);
	int seat1=1,seat2=2,seat3=3,seat4=4,seat5=5,seat6=6;
	if(seat1==num || seat3==num || num%6==seat1 || num%6==seat3)
	{
		printf("LW");
	}
	else if (seat2==num || num%6==seat2)
	{
		printf("LA");
	}
	else if(seat4==num || seat6==num || num%6==seat4 || num%6==seat6)
	{
		printf("UW");
	}
	else if (seat2==num || num%6==seat2)
	{
		printf("UA");
	}

}
