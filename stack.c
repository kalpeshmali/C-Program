#include<stdio.h>
#define SIZE 5
void clrscreen()
{
	system("pause");
	system("cls");
}
int main()
{
	int i,num,choice,arr[SIZE],top=-1;
	do
	{
	clrscreen();
	printf("\n\t\tStack Operation\n");
	printf("\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n\n");
	printf("\tEnter your Choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:if(top<SIZE-1)
				{
					printf("\tEnter the Number\n");
					scanf("%d",&num);
					top++;
					arr[top]=num;
					printf("%d Number is Added %d Location\n",num,top);
				}
				else
				{
					printf("Stack is overflow\n");
				}
			
				break;
		case 2:
				if(top==-1)
				{
					printf("Stack is underflow\n");
				}
				else
				{
				
					printf("%d number deleted\n",arr[top]);
					top=top-1;
				}
				break;
				
		case 3:	
				if(top==-1)
				{
					printf("Stack is underflow\n");
				}
				else
				{
					printf("****************************\n");
					printf("Stack element is\n");
					for(i=top;i>=0;i--)
					{
						printf("%d\n",arr[i]);
					}
					printf("****************************\n");
				}
				break;
		case 4:
				exit(0);
				break;
		default:	
				printf("Invalid choice\n");			
			
	}
	}while(1);	
}
