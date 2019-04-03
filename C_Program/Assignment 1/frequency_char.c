#include<stdio.h>
#include<stdlib.h>
#define sz 20
#define alp 26
int main()
{
	int i=0,freq[alp]={0};
	char ch,arr[sz];
	printf("Enter the String\n");
	gets(arr);
	/*
	do
	{
		fflush(stdin);
		ch=getchar();
		if(ch>='a' && ch<='z')
		{
			arr[i]=ch;
			i++;
		}
		else
		{
			printf("Invalid Character..Please Enter the Small letter\n");
		}
	
	}while(ch!=EOF);
	*/
	for(i=0;arr[i]!='\0';i++)
	{
		if((arr[i] >= 'a') && (arr[i] <= 'z'))
		{
			freq[arr[i]-'a']++;
		}
	}
	for(i=0;i<alp;i++)
	{
		if(freq[i]!=0)
		{
			printf("%c = %d\n",i+'a',freq[i]);
		}
	}
	return 0;
}
