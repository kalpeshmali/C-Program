#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	c=n%6;
	switch(c)
	{
	    case 1:printf("LW");
		       break;
		case 2:printf("LA");
		       break;
		case 3:printf("LW");
		       break;
		case 4:printf("UW");
		       break;
		case 5:printf("UA");
		       break;
		case 0:printf("UW");
		       break;
	}
	
	
}
