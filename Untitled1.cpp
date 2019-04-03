#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}NODE:
NODE *head=NULL;
int main()
{
	printf("1.Add Element Last\n");
	printf("Enter the Your Choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 0:
			display(void);	
			break;
		case 1:
			addLast(void);
			break;
	
			break;
		default:
			printf("Invalid Choice\n");
	}
}
int inputData(void)
{
	int num;
	printf("Enter The Element\n");
	scanf("%d",&num);
	return num;
}
NODE* newNode(void)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->prev=NULL;
	temp->data=inputData();
	temp->next=NULL;
}
void addLast(void)
{
	if(head!=NULL)
	{
		head=newNode();
	}
}
void display(void)
{
	NODE *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
