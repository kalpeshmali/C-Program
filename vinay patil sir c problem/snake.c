#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void display(int arr[SIZE][SIZE])
{
	int i,j;
	printf("\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}
void clear_System()
{
	system("cls");
}
int won_check(int arr[SIZE][SIZE])
{
	static int count =1;
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if((arr[i][j] <= count) && (arr[i][j] != 0))	
			{
				count++;
			}
		}
	}
	return count;
}
swap(int arr[SIZE][SIZE],int i,int j,int x,int y)
{
	int temp;
	temp=arr[i][j];
	arr[i][j]=arr[x][y];
	arr[x][y]=temp;
	return temp;
	
}
int check_num(int arr[SIZE][SIZE],int num,int x,int y)
{
	int i,j,temp;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(arr[i][j]==num)
			{
				if((i==x) && (j<y))
				{
					swap(&arr[0][0],i,j,x,y);
				}
				else if((j==y) && (i<y))
				{
					swap(&arr[0][0],i,j,x,y);
				}
				else if((j==y) && (i<x))
				{
					swap(&arr[0][0],i,j,x,y);
				}
				else if((i>x) && j==y)
				{
					swap(&arr[0][0],i,j,x,y);
				}
				else if((j>y) && i==x)
				{
					swap(&arr[0][0],i,j,x,y);
				}
				else
				{
					printf("invalid Number\nPlease Enter the Correct Number\n");
					system("pause");
					return temp;
				}
				break;
			}
		}
	}
}
int main()
{
	int arr[SIZE][SIZE],i,j,temp,num,count;
	printf("Enter the Array element\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	while(1)
	{
	first :
		clear_System();
		display(&arr[0][0]);
		count = won_check(&arr[0][0]);
		if(count==16)
		{
			printf("You won the game\n");
			exit(1);
		}
		for(i=0;i<SIZE;i++)
		{
			for(j=0;j<SIZE;j++)
			{
				if(arr[i][j]==0)
				{
					printf("Enter the Number\n");
					scanf("%d",&num);
					if(num == 00)
					{
						exit(0);
					}
				 	temp=check_num(&arr[0][0],num,i,j);
				 	goto first;
				}
			}
		}
	}

}
