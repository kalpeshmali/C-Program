#include<stdio.h> //Header file for scanf and printf
void clrCalExit()  //function defination for clean screen,print calculator and press e then exit program
{
		system("cls");
		printf("Calculator\n");
		printf("Press 'e' for exit\n");	
}
int main()
{
	char arr[15],b[7],c[7],op;  //character array declaration and one op varible character type
	do
	{
	char ct=0i,j=0,count=0,ct=0;    //temparary variable declaration for increment and flag check
	int num1=0,num2=0;			//operation perform using two variable

		clrCalExit();			//function calling 
	
		scanf("%s",&arr);		//expression enter
		if(arr[0]=='e') 	//check first arr index position zero is e then exit
		{
			return 0;	
		}
		if((arr[0]=='-') || (arr[0]=='/') || (arr[0]=='*')	||(arr[0]=='/') || (arr[0]=='%'))	//check the first index  is not a operator
		{
			printf("Enter positiive number only\n");
			system("pause");
			ct++;			//system call used by pause the control
			continue;					//contiue goes above the code
		}

		if(arr[0]=='e')			//zero index position is 'e' then terminate the program 
		{
			return 0;
		}
		for(i=0;arr[i]!='\0';i++) // for loop check to end of string in array 
		{
			if((arr[i]=='+') || (arr[i] == '-') || (arr[i] == '/') || (arr[i]=='*') ||(arr[i] == '%')) //check the operator will found stored the op character
			{
				op=arr[i];
				count++;
				b[i]='\0';
				
			}
			else if((count==1) && (arr[i] >= '0' && arr[i] <= '9' ))			//this coundition is true then 2nd array stored next character
			{
				
				c[j]=arr[i];
				j++;
				c[j]='\0';		//this array added the end string in last postiton
			}
			else if(arr[i] >= '0' && arr[i] <= '9' )	//first array stored the input array character
			{
				b[i]=arr[i];
			}
			else
			{
				printf("Invalid Expression\n");
				system("pause");
				ct++;
				continue;
			}
	
		}
		if((count == 0) || (count> 1))		//checking the number of operator
		{
			printf("Invalid operator\n");
			ct++;
			system("pause");
			continue;
		}
		arr[i]='\0';	//input expression will add end of string to last index position
		num1=atoi(b);	//using atoi convert to char to integer
		num2=atoi(c);
		switch(op)			//check the operator
		{
			case '+':		
					clrCalExit();		//function calling
				   	printf("%s = %d\n",arr,num1 + num2);		//addition of two number
					system("pause");	//hold the output
					break;
			case '-':
					clrCalExit();		// function calling
					printf("%s = %d\n",arr,num1-num2);		//subtraction of two number
					system("pause");	//holds the output
					break;
			case '*':
					clrCalExit();		// function calling
					printf("%s = %d\n",arr,num1*num2);		//multiplication of two number
					system("pause");	//holds the output
					break;
			case '/':
					clrCalExit();		//function calling
					printf("%s = %.2f\n",arr,(float)num1 / num2);		//Division of twon number result sored in floating type
					system("pause");	//holds the output
					break;
			case '%':
					clrCalExit();		// function calling
					printf("%s = %d\n",arr,num1 % num2);		//check the remainder of two number			
					system("pause");	//holds the output
					break;
			//default:
				//	printf("Invalid Operator\n");
		}
	}while(1);
return 0;
}
