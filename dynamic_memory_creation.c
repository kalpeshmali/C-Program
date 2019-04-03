#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int *num1,*num2,*num3;
	num1=(int)malloc(sizeof(num1));
	num2=(int)malloc(sizeof(num2));
	num3=(int)malloc(sizeof(num2));
	printf("Enter the Three Number\n");
	scanf("%d",num1);
	scanf("%d",num2);
	scanf("%d",num3);
	printf("num1 = %d\n",*num1);
	printf("num2 = %d\n",*num2);
	printf("num3 = %d\n",*num3);
}
