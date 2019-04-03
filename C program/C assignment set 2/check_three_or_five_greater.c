//Write a C program to check if the number of 3's is greater than the number of 5's in array of length 10.
#include<stdio.h>
#define SIZE 10		//Size if Fixed

void check_condition(int three,int five)  //check the number of fives greter,or smaller,or equal
{
	if(three == five)	//check it equal or not
	{
		printf("Numbers  Three and Five are Equal \n");	//printing a message both are equal
		return 0;
	}
	three>five ?printf("Number of three is Greater %d \n",three): printf("Number of Five is Greater %d \n",five);//check five greter or three
}
int main()
{
	int arr[SIZE];		//declaration of array
	short int three=0,five=0,i;		//declaration of a variables
	printf("Enter the Array element of an array\n");		//Entering the Element of an array
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++)		//loop is execute till the size-1
	{
		if(arr[i]==3)		//checking the array index of 3 is equal
		{
			three++;		//count increment by one
		}
		if(arr[i]==5)		//checking the array index of 5 is eqaal 
		{
			five++;			//count increment by one
		}
	}
	check_condition(three,five);

}
