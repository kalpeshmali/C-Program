//Program to Sort Strings in the Dictionary(lexicographical) Order
#include<stdio.h>
#include<string.h>
#define SIZE 5
void dictionary(char **ptr)	//Dictionary function declaration,sorting using bubble sort
{
	short i,j;	//tempary variable declaration
	char *temp;	//tempary character pointer declaration
	for(i=0;i<SIZE;i++)		//This loop for length of pointer 
	{
		for(j=0;j<SIZE-i-1;j++)	//this loop for swaping purpose
		{
			if((strcmp(ptr[j],ptr[j+1])>0))		//compareing the ptr index and next ptr index
			{
				temp=ptr[j];		//temparary pointer is stored address of the current index of ptr pointer address
				ptr[j]=ptr[j+1];	//ptr j index adrees stored the adress of j+1
				ptr[j+1]=temp;		//ptr j+1 adress stored the adress of temp pointer variable
			}
		}
	}
	for(i=0;i<SIZE;i++)	 //print the string
	{
		printf("%s\n",ptr[i]);
	}
}
int main()
{
	char i=0,*ptr[SIZE],arr[SIZE][10];	//Variable declaration,opinter of an array declaration,2 d array declaration
	printf("Enter the SIZE string\n");
	for(i=0;i<SIZE;i++)
	{
		gets(arr[i]);		//Entering The String
		ptr[i]=arr[i];		//holding the address of array in pointer array
	}
	ptr[0]=arr[0];		//ptr re-initialise to zero
	dictionary(ptr);	//user defined function calling and pass the argument base address of ptr
	
}
