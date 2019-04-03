 //C Program to Remove all Characters in a String except alphabet 
#include<stdio.h>
#define SIZE 50			//length of array
#include<string.h>
void removeCharacter(char *ptr,int len)		//Function declaration for removing character
{
	
	char arr[SIZE];		//Anather array Declaration
	short j=0,i;			//temparary variable declaration 
	for(i=0;i<len;i++)
	{
		if(((ptr[i] >=65) && (ptr[i]<=90)) || ((ptr[i]>=97) && (ptr[i]<=122)))	//if accept only alphabets
		{
			arr[j++]=ptr[i];	//array stored only alphabet 
		}
	}
	arr[j]='\0';		//array last value is NULL added
	printf(" Array is %s\n",ptr1);		//print the Array
}
int main()
{
	char arr[SIZE],*ptr;	//array declaration,and Pointer variable declaration
	printf("Enter the String\n");	//Entering the String
	gets(arr);		//Scanning the string
	ptr=&arr;	//ptr holds the address of Array
	removeCharacter(ptr,strlen(arr));//Calling the Function
	
}
