//Performing the Bitwise operation Based on Flag 


#include<stdio.h>
void print_binary(char temp)    //function declaration.using this function print the 8 bit of data 
{
	int i;
	for(i=7;i>=0;i--)
	{
		printf("%d ",temp>>i & 1);
	}
	printf("\n");
}
void clearPause(void)
{

	system("pause");
}
int main()
{
	int i, result,a,b,d;        //variable declaration
	char temp,flag = 0b01101011;    // flag as storing data in binary format
	
	do
	{
	
		clearPause();
		temp=flag;
		printf("Enter the three number\n");		
		scanf("%d%d%d",&a,&b,&d);			//Enter three number
		result=(a*b)/d;
		printf("%d\n",result);				//result stored the calculation of a,b,d
	
		if((result>=0 && result<= 500))		//condition check.this condition is true in flag Set all the bits of lower nibble to 1
		{
			for(i=3;i>0;i--)
			{
				temp=temp|(1<<i);			//set the bit in position wise
			}
			print_binary(temp);
			clearPause();
		
		}
		else if(result >500 && result <= 2000)	//This condition is true Toggle all the bits in flag.
		{
			for (i=7;i>=0;i--)
			{
				temp=temp^(1<<i);		//toggle the bit in position wise
			}
			print_binary(temp);
			clearPause();
		}
		else if (result>2000 && result<= 10000) 	//This condition is true.Toggle only the bits of upper nibble in flag
		{
			for (i=7;i>=4;i--)					//this loop only upper nibble
			{
				temp=temp^(1<<i);			//	toogle the bit 
			}
			print_binary(temp);
			clearPause();
		}
		else if (result >10000)			//this condition is true the clear the all bit in flag
		{
			for(i=7;i>=0;i--)
			{
				temp=temp &(~(1<<i));	//clear the bit index wise
			}
			print_binary(temp);
			clearPause();
		}
	system("cls");
	}while(1);
}
