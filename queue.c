#include<stdio.h>
#define SIZE 5
void enQueue(void);
void deQueue(void);
void display(void);
int main()
{
	int i,choice,num,arr[SIZE],front=-1,rear=-1;
	printf("\t\tQueue Operation\n");
	printf("\t 1.Enqueue.\n 2.Dequeue.\n 3.Display\n");
	printf("Enter your Choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: enQueue();
				break;
		case 2:	deQueue();
				break;
		case 3: display();
				break;
				
		case 4: exit(0);
			break;
		default:printf("Invalid Choice\n");		
	}
	void enQueue(void)
	{
		front=0;
		if(rear<SIZE-1)
		{
			printf("\n\tEnter the Number\n");
			scanf("%d",&num);
			rear++;
			arr[rear]=num;
		}
		else
		{
			printf("Queue is Overflow\n");
		}
	}
	void deQueue(void)
	{
		if(front == -1)
		{
			printf("Queue is underflow\n");
		}
		else
		{
			printf("%d Number is deleted\n",arr[front]);
			front--;
		}
	}
	void display()
	{
		if(front==-1)
		{
			printf("Queue is empty\n");
		}
		else
		{
			printf("********************\nQueue element is\n");
			for(i=front;i<=rear;i++)
			{
				printf(" * %d *\n",arr[i]);
				printf(" *	  *\n");
			}
		}
	}
}
