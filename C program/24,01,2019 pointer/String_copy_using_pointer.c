#include<stdio.h>
#define SIZE 20		//Size declaration
int main()
{
	char i,str1[SIZE],str2[SIZE],*ptr1,*ptr2;	//character array and pointer variable character type declaration
	printf("Enter the First String\n");			//Entering first string
	scanf("%s",&str1);
	printf("Enter the Second String\n");		//Entering seconf string
	scanf("%s",&str2);
	ptr1=&str1;						//ptr1 and ptr2 pointer holds the address of str1 and str2 
	ptr2=&str2;
	
	printf(" Before copying \nstr1 = %s\n str2 = %s\n",str1,str2);		//before copying print the string
	
	for(i=0;ptr2[i]!='\0';i++)			//Copyting the String using Character by Character using index
	{
		ptr1[i]=ptr2[i];
		printf("%c ",ptr1[i]);
	}
	ptr1[i]='\0';
	printf("After the Copying ptr1 = %s \nptr2 = %s",ptr1,ptr2);	//printing the Stringd using Pointers
	printf("******************\n");		// Copyting the String character by character using Adress
/*
	while(*ptr2!='\0')
	{
		*ptr1=*ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1='\0';
	ptr1=&str1;
	ptr2=&str2;
	printf("string 1 = %s \n",ptr1);
	printf("string 2 = %s \n",ptr2);
*/	return 0;
}
