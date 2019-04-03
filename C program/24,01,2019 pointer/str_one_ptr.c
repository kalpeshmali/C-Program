#include<stdio.h>
#define SIZE 50
int strtokFunction(char *ptr,char arr[],char ch)
{	
	static int i;
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%d ",i);
		if(arr[i] == ch)
		{
			arr[i]='\0';
			return ptr;
			
		}
	}	
}
int main()
{
	char static *ptr;
	char i,j=0,arr[SIZE],ch;
	printf("Enter The string\n");
	gets(arr);
	printf("Enter the delimitor\n");
	scanf("%c",&ch);
	ptr=arr;
	ptr=strtokFunction(ptr,arr,ch);
	printf("%s \n",ptr);
	ptr=strtokFunction(ptr,arr,ch);
	printf("%s \n",ptr);
	return 0;
}
