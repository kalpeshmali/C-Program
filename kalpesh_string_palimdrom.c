#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],temp[10];
	printf("Enter the string\n");
	scanf("%s",&name);
	strcpy(temp,name);
	strrev(name);
	if(strcmp(temp,name)==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
