#include<stdio.h>

int main()
{
	int *ptr=NULL;
	printf("%p\n",ptr);
	int a=10;
	ptr=&a;
	printf("%p",ptr);
	return 0;
	
}

