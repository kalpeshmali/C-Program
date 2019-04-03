// sort a number in binary number of one's occuring
#include<stdio.h>
int countBits(int a);
int main()
{
	int i,j,c1,c2,temp;
	int arr[5];
	printf("Enter the five number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			c1=countBits(arr[j]);
			c2=countBits(arr[j+1]);
			if(c1>c2)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			printf("j= %d  ,j+1 =%d ",arr[j],arr[j+1]);
			printf("\n*********PASS %d ************\n\n",i);
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	
}
int countBits(int a) 
{ 
	printf("a = %d\n",a);
    int count = 0; 
    while (a) 
    { 
        if(a & 1 )
            count+= 1; 
        a = a>>1; 
    } 
    printf(" count = %d \n",count);
    return count; 
} 
  
