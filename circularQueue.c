#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define Enqueue 1
#define Dequeue 2
#define Display 3
#define Exit 4
int main()
{
	int arr[SIZE],front=-1,rear=-1,i,choice,num;
	do
	{
	
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case Enqueue:	
					if((rear+1)%SIZE == front)
					{
						printf("Queue is Full\n");
						break;
					}
					else if(front==-1)
					{
						front=0;
						rear=0;
					}
					else
					{
						rear=(rear+1)%SIZE;
					}
					printf("Enter the Number\n");
					scanf("%d",&num);
					arr[rear]=num;
					break;
			
			case Dequeue:
					if(front==-1)
					{
						printf("Queue is Empty\n");
					}
					else if(front == rear)
					{
						printf("%d Deleted\n",arr[front]);
						front =-1;
						rear=-1;
					}
					else
					{
						printf("%d Deleted\n",arr[front]);
						front=(front+1)%SIZE;
						
					}
					break;
			case Display:
					if(front==-1)
					{
						printf("Queue is Empty\n");
					}
					else if(rear==0)
					{
						printf("%d\n",arr[rear]);
						break;
					}
					else
					{
						printf("Queue element is\n");
						for(i=front;i!=rear;i=(i+1)%SIZE)
						{
							printf("%d\n",arr[i]);
						}
						printf("%d\n",arr[i]);
					}
					break;
			case Exit:
					exit(0);
					break;
			default:
					printf("Invalid Choice\n");
		}
	}while(1);
}
