#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *head=NULL;

void addData(void);
NODE* newNode(void);
void display(void); 
void checkData(void);
void swapElement(int* ,int*);
int main()
{ 
	int i;
	printf("Enter the data\n");
	for(i=0;i<SIZE;i++)
	{
		addData();
	}
	display();
	checkData();
	display();
}
int addElement(void)
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
	return num;
}

NODE* newNode(void)
{
	NODE *temp;
	temp=(NODE*) malloc(sizeof(NODE));
	temp->data=addElement();
	temp->next=NULL;
}
void addData(void)
{
	NODE *temp;
	temp=newNode();
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		NODE* temp1;
		temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
}
void display(void)
{
	NODE *temp;
	temp=head;
	if(temp==NULL)
	{
		printf("Link List is Empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
void checkData(void)
{
	int i,j,t1;
	NODE *temp,*temp1;
	temp=head;
	temp1=temp->next;
	
	for(i=0;i<SIZE;i++)
	{
		if((temp->data)>(temp1->data))
		{
			t1=temp->data;
			temp->data=temp1->data;
			temp1->data=t1;	
		}
		
	}
}
