//Program For Circular Queue
#include<stdio.h>			//Header File for Input And Output
#include<stdlib.h>			//Standard library File For dynamic memory creation
#define SIZE 5				//Array size of Memory
#define ENQUEUE 1			//In switch case 1 is Enqueue operation 
#define DEQUEUE 2   		//In switch case 2 is Dequeue operation
#define DISPLAY 3			// Display the queue
#define EXIT 4				// Exit the queue
#define TRUE 1				//Magic Number is true =0
#define FALSE 0				//Magic number is False =0 

int arr[SIZE],front=-1,rear=-1;	//declaring the array ,front and rear variable 
void DisplayQueue(void);	//declaring the display function
void enQueue(int);		//enqueue function declaration
int isFull(void);	    //Queue is full or not function declaration
int isEmpty(void);		//Queue is Empty or not function declaration
int deQueue(void);		//pop operation of queue
int inputData(void);		//Input the data into queue
void clearSystem(void);		//clean the command prompt
int main()
{
	int choice,num;
	do
	{	
		
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case ENQUEUE:
							enQueue(inputData());	//Enqueue operation perform
							clearSystem();
					break;
			
			case DEQUEUE:
							clearSystem();
						printf("%d Number Deleted\n",deQueue());	//dequeue operation perform
				
					break;
					
			case DISPLAY:
								clearSystem();
							DisplayQueue();		//display the queue data
					break;
					
			case EXIT:
					exit(0);		//exit the queue
					break;
			default:
					printf("Invalid Choice\n");
		}
		
	}while(1);
}

void enQueue(int num)
{
	if(isFull()==1)
	{
		printf("Queue is Full\n");	
			sleep(2);
	}
	else if(front==-1)
	{
		
		front=0;
		rear=0;
		arr[rear]=num;
	}
	else
	{
		rear=(rear+1)%SIZE;
		arr[rear]=num;
	}
		
}

int isFull(void)
{
	if((front==0 && rear==SIZE-1)||((rear+1)%SIZE == front))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

int isEmpty(void)
{
	if(-1==front)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}	
}

int deQueue(void)
{
	int temp;
	if(isEmpty())
	{
		printf("Queue is Empty\n");
	}
	else if(front == rear)
	{
		
		temp=arr[front];
		front =-1;
		rear=-1;
		return temp;
	}
	else
	{
		
		front=(front+1)%SIZE;
		return arr[front-1];						
	}
}

void DisplayQueue(void)
{
	if(isEmpty())
	{
		printf("Queue is Empty\n");
		
	}
/*	else if(rear==0)
	{
		printf("||%d||\n",arr[rear]);
	}*/
	else
	{
		int i;
		printf("Queue element is\n");
		for(i=front;i!=rear;i=(i+1)%SIZE)
		{
			printf("||%d||\n",arr[i]);
		}
		printf("||%d||\n",arr[i]);
	}
}

int inputData(void)
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
	return num;
}
void clearSystem(void)
{
	system("cls");

}
