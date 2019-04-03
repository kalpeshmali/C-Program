//Using pointer String Function operation will perfirmed
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 20		//Size is 20
void stringCopy(char *ptr1,char *ptr2)		//string Copy function
{
	while(*ptr2!='\0')
	{
		*ptr1=*ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1='\0';
	printf("After Copying\n");
}
void stringConcate(char *ptr1,char *ptr2)	//String Concate Function
{
	for(;*ptr1!='\0';*ptr1++);
	while(*ptr2!='\0')
	{
		*ptr1=*ptr2;
		ptr1++;
		ptr2++;	
	}
	*ptr1='\0';
	printf("After Concating\n");
}
void stringUpper(char *ptr)		//String is upper case
{
	while(*ptr!='\0')
	{
		if(*ptr >=97 && *ptr <=122)
		{
			*ptr=*ptr-32;
		}
		ptr++;
	}
}
void stringLower(char *ptr)			//string is Lower case
{
	while(*ptr!='\0')
	{
		if((*ptr >=65) &&( *ptr <=97))
		{
			*ptr=*ptr+32;
		}
		ptr++;
	}	
}
void stringCompare(char *ptr1,char *ptr2)	//String Compare Function as well as String case compare
{
	int count,countcase,strlen1,strlen2;
	strlen1=stringLength(ptr1);
	strlen2=stringLength(ptr2);
	if(strlen1 == strlen2)
	{
		while(*ptr1!='\0')
		{
			if(*ptr1 == *ptr2)
			{
				count++;		
			}
			if((*ptr1 == *ptr2) || (*ptr1 == *ptr2-32) || (*ptr1 == *ptr2+32))
			{
				countcase++;
			}
			ptr1++;
			ptr2++;
		}
		if(countcase == strlen1)
		{
			printf("Both String Are Same\n");
		}
		else if(count == strlen1)
		{
			printf("Both String Are Same\n");
		}
	
		else
		{
			printf("Both String are not Same\n");
		}
		
	}
	else
	{
		printf("Both string length not same\n");	
	}
}
int stringLength(char *ptr)		//Find The Length Of the String
{
	int count=0;
	while(*ptr!='\0')
	{
		ptr++;
		count++;
	}
	return count;
}
void stringReverse(char *ptr)			//reverese The String
{

	int strlen,i,j;
	char temp;
	strlen = stringLength(ptr)-1; 
		j=strlen;
		for(i=0;i<strlen/2;i++,j--)
		{
			temp=ptr[i];
			ptr[i]=ptr[j];
		ptr[j]=temp;
			
	}
}
void display_string(char *ptr1,char *ptr2)	//Display the String
{
	printf("String 1 = %s\nString 2 = %s\n",ptr1,ptr2);
}
int stringScanning(char *ptr,char ch)		//Scanning the string character
{
	while(*ptr!='\0')
	{
		if(*ptr == ch)
		{
			return ptr+1;
		}
		ptr++;
	}
	return 0;
	//printf("%c character not present in a %s string\n",ch,*ptr);
}
int stringChoice()
{
	int choice1;
	printf("1.string 1\n2.string2\n");
	scanf("%d",&choice1);
	return choice1;
}

int main()
{
		char str1[(SIZE *2)],str2[SIZE],*ptr1,*ptr2,ch,*temp;	//pointer variable declaration and two character array declaration 
		int choice,choice1;
		printf("Enter the Two String\n");	//Entering Two String
		gets(str1);
		gets(str2);
	
		ptr1=&str1;					//ptr1 and ptr2 Holds the Address of String1 and String 2
		ptr2=&str2;
		
		printf("\n1.Copy the String.\n2.Concate a two String.\n");		//Displaying the Message
		printf("3.Compare the String.\n4.String Case Compare\n5.String Length.\n6.String reverse\n7. String Upper Case \n");
		printf("8.String Lower Case\n9.String Scanning Operation\n\n");
		printf("Enter the your Choice\n\n");
		scanf("%d",&choice);
		switch(choice)					//check the Choice
		{
			case 1:  stringCopy(ptr1,ptr2);			//string Copy function calling with two pointer argument
						display_string(ptr1,ptr2);	//Display the String
					break;
			case 2:	 stringConcate(ptr1,ptr2);		//string Concate  function calling with two pointer argument
						display_string(ptr1,ptr2);
					break;
			case 3:	 stringCompare(ptr1,ptr2);		//String Compare function calling witn two pointer argument
						display_string(ptr1,ptr2);
					break;
			case 4: stringCompare(ptr1,ptr2);
					break;
			case 5:	printf("Which string length are you Find\n");		//which string length find u select the string
					choice1=stringChoice();
					choice1 == 1 ? printf("First String length is %d\n",(stringLength(ptr1))):printf("First String length is %d\n",(stringLength(ptr2)));
					break;
			case 6:	printf("Which string you want to reverse\n");		//which string length find u select the string
					choice1=stringChoice();
					choice1 == 1?(stringReverse(ptr1),printf("First String length is %s\n",ptr1)):(stringReverse(ptr2),printf("Second String length is %s\n",ptr2));
					break;
			case 7:	
					printf("Which string you want to Upper\n");		//which string length find u select the string
					choice1=stringChoice();
					choice1 == 1?(stringUpper(ptr1),printf("First String is %s\n",ptr1)):(stringUpper(ptr2),printf("Second String is %s\n",ptr2));
					break;
			case 8:	printf("Which string you want to Lower\n");		//which string length find u select the string
					choice1=stringChoice();
					choice1 == 1?(stringLower(ptr1),printf("First String is %s\n",ptr1)):(stringLower(ptr1),printf("Second String is %s\n",ptr2));
					break;
			case 9: printf("Which string you want to scan\n");		//which string length find u select the string
					choice1=stringChoice();
					printf("Enter the Character you want to scan\n");
					scanf(" %c",&ch);
					choice1 == 1?(ptr1=stringScanning(ptr1,ch),printf("First String is %s\n",ptr1)):(ptr2=stringScanning(ptr1,ch),printf("Second String is %s\n",ptr2));
					break;
			default:
					printf("Invalid Choice1\n");
		}
return 0;
}
