#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int *ptr1,*ptr2;
	ptr1=(int)malloc(sizeof(ptr1));
	ptr2=(int)malloc(sizeof(ptr2));
	printf("Enter the Two number\n");
	scanf("%d%d",ptr1,ptr2);
	printf("Before Swapping number is number 1 = %d and number 2 = %d\n",*ptr1,*ptr2);
	swap(ptr1,ptr2);
	printf("After Swapping Number 1 = %d and number 2 = %d\n",*ptr1,*ptr2);
	return 0;
	
}
