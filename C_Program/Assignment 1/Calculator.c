#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//Retain the line corresponding to the OS, commnet out other line
#define LINUX
//#define WINDOWS
int main()
{
	char arr[3];
	do
	{
	#ifdef WINDOWS
	system("cls");
	#endif
	#ifdef LINUX
	system("clear");
	#endif
	printf("Calculator\n");
	printf("Press 'e' for exit\n");
	scanf("%s",&arr);
	if(arr[0]=='e')
	{
		return 0;
	}
	void clrCalExit()  //function defination for clean screen,print calculator and press e then exit program
	{
		system("cls");
		printf("Calculator\n");
		printf("Press 'e' for exit\n");	
	}
	switch(arr[1])
	{
		case '+':clrCalExit()
			printf("%s = %d\n",arr,(int)(arr[0]-'0') +(int)(arr[2]-'0'));
			sleep(2);
			break;
		case '-':clrCalExit()
			printf("%s = %d\n",arr,(int)(arr[0]-'0') - (int)(arr[2]-'0'));
			sleep(2);
			break;
		case '*':clrCalExit()
			printf("%s = %d\n",arr,(int)(arr[0]-'0') * (int)(arr[2]-'0'));
			sleep(2);
			break;
		case '/':clrCalExit()
			printf("%s = %.2f\n",arr,(float)(arr[0]-'0') / (float)(arr[2]-'0'));
			sleep(2);
			break;
		case '%':clrCalExit()
			printf("%s = %d\n",arr,(int)(arr[0]-'0') % (int)(arr[2]-'0'));
			sleep(2);
			break;
		default:printf("Invalid Operator\n");
	}
	}while(1);
	return 0;
}
