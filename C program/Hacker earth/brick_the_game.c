#include<stdio.h>
int main()
{
	int i,num,var=1,patalu=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	    if(i=var)
	    {
	        num=num-patalu;
	        
	    }
	    else if(num>patalu*2)
	    {
	        num=num-(patalu*2);
	        var++;
	    }
	}
	printf("%d ",num);
	if(num==1)
	{
		printf("Motu\n");
	}
	else
	{
		printf("Patlu\n");
	}
}
