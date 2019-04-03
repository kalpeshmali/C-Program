#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
	int choice,arr[SIZE],front=-1,rear=-1,i,num;
	do
	{
	
		printf("\t\tQueue Operation\n");
		printf(" 1.Enqueue.\n 2.Dequeue.\n 3.Display\n 4.Exit\n");
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:		if(rear>SIZE-1)
						{
							printf("Queue is Full\n");
							break;
						}
						else if(rear == -1 && front == -1)
						{
							
							front=0;
							rear=0;
						}
						rear++;
						printf("Enter the Number\n");
						scanf("%d",&num);
						arr[rear]=num;
										
						break;
			case 2: 	
						if(front == -1)
						{
							printf("Queue is Empty\n");
						}
						else if(front == rear)
						{
							printf("%d Number Deleted\n",arr[rear]);
							front=-1;
							rear=-1;
						}
						else
						{
							printf("%d Number Deleted\n",arr[front+1]);
							front ++;
						}
					break;
			case 3:
					if(front== rear)
					{
						printf("Queue is Empty\n");
					}
					else
					{
						for(i=rear;i>front;i--)
						{
							printf("* %d *\n",arr[i]);
						}
					}
					break;
					
			case 4: exit(0);
				break;
			default:printf("Invalid Choice\n");		
		}
	}while(1);
}
