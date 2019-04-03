#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *head=NULL;
NODE* addNode(void);
void display(void);
void sortNode(void);
void addFirst(NODE*);
void addLast(NODE*);

int main()
{
	int i,num;
	printf("How many node you want to create\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		sortNode();
	}
	display();
	
	printf("After Sorting The List\n");
	display();
}

NODE* addNode(void)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	printf("Enter the Number\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}

void display(void)
{
	NODE *trav;
	trav=head;
	while(trav!=NULL)
	{
		printf("%d->",trav->data);
		trav=trav->next;	
	}
	printf("\n");
}

void sortNode(void)
{
	NODE *temp;
	temp=addNode();
	if(head==NULL)
	{
		head=temp;
	}
	else if(head->data>temp->data)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		NODE *trav,*prev;
		trav=head;
		while(trav!=NULL)
		{	
			if(trav->data>temp->data)
			{
				prev->next=temp;
				temp->next=trav;
				break;
			}
			prev=trav;
			trav=trav->next;	
		}
		prev->next=temp;
	}
}


