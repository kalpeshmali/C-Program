#include<stdio.h>
#define SIZE 50
int i=0,j=0;									//declaring and initializing of global variable
int  strtokFunction(char arr[],char ch) 		//function definition
{
	//int i=0;
	//printf("%s\n",arr);
	char *ptr=&arr[i];
	for(;arr[i]!='\0';i++)
	{
		if(arr[i] == ch)
		{
			arr[i++]='\0';
			break;	
		}
		if(arr[i]==NULL)
		{ 
			i=0;
			arr[i++]='\0';
			break;
		}
	
}
	return ptr;
}
int main()
{
	char arr[SIZE],ch,*ptr; 			 //variable declaration,Character,and a pointer variable
	char str[SIZE] = "hello how are you";
	printf("Enter The string\n");
	gets(arr);                   			//get array from the user
	printf("Enter the delimitor\n");
	scanf("%c",&ch); 						//scan the delimitor which is given by user
	
	//strtokFunction(arr,ch);
	printf("%s \n",strtokFunction(arr,ch));  //function call
	printf("%s \n",strtokFunction(arr,ch));		//function call
	printf("%s \n",strtokFunction(&str,ch));		//function call
//	printf("%s \n",strtokFunction(str,ch));		//function call
	//printf("%s \n",strtokFunction(arr,ch));
	//printf("%s \n",strtokFunction(arr,ch));
	//strtokFunction(arr,ch);
	//strtokFunction(arr,ch); 
	return 0;
}
