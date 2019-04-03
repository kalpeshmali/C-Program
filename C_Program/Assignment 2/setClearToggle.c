//Program for bitwise operation
#include<stdio.h>
int main()
{
	int num,pos,choice;
	char ch;
	do
	{
		system("cls");      //clear the screen
		printf("Enter the number\n");		//Enter number
		scanf("%d",&num);
		printf("Enter the position\n");		//Entering the position
		scanf("%d",&pos);
		printf("\n1.set a bit\n 2.Clear a bit\n 3.Toggle a bit\n");		//which operation will perform
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	
					num=num|1;								//set the bit
					printf("Set number is %d\n",num);
					break;
				
			case 2:
					num=num&(~(1<<pos));					//clear the bit
					printf("clear bit number is %d\n",num);
					break;
		
			case 3:
					num=num^(num<<pos);						//toggle the bit
					printf("Toggle bit number is %d\n",num);
					break;
		
			default:
					printf("Invalid choice\n");		
		}
	printf("Do you want to continue...y/n \n");
	fflush(stdin);
	scanf("%c",&ch);	
	}while(ch=='y');			//check the condition again performing this task or exit
return 0;
}
