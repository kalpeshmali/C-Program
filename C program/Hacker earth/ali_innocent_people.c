#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int i,j,num1=0,count=0;
	char num[1],str[10];
	printf("Enter the String\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
 	if((str[i]=='+')||(str[i]=='-')||(str[i]=='*')||(str[i]=='/') ||(str[i]=='X'))
		{
			i++;
			continue;
		}
		for(j=0;j<2;j++)
		{
			num[0]=str[j];
			num1=num1+atoi(num);
		}
		if(num1%2==0)
		{
			count++;	
		}
		
	}
	if(count==4)
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}
