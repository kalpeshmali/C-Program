#include<stdio.h>
#include<string.h>
int main()
{
	char *ptr_arr[100],*ptr_temp[2];
	int num,j,i,k;
	printf("Enter The Number\n");
	scanf("%d",&num);
	char str[num*2][100];
	for(i=0;i<num*2;i++)
	{
		scanf("%s",str[i]);
		ptr_arr[i]=str[i];
	}

	printf("string length is %d \n",strlen(ptr_arr[0]));
	for(i=0;i<num*2-1;i++)
	{
		ptr_temp[i]=ptr_arr[i+1];
	}	
	
	return 0;
}
