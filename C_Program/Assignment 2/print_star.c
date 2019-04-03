//Program for pyramid 
#include<stdio.h>
int main()
{
	
	
	
	
	
	
	short int num,i,j,k; //variable declarattion
	printf("Enter the number\n");
	scanf("%d",&num);		//Enter the number row 
	for(i=0;i<num;i++)		//looping is end of row
	{
		for(j=1;j<=num-i+1;j++)		//this loop only for space
		{
			printf(" ");
		}
		for(k=0;k<2*i-1;k++)		//this loop for printing a star
		{
			printf("*");
		}
		printf("\n");			//new line of star
	}
}
