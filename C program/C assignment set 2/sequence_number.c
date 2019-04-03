//Write a C program to check a given array of integers and return true if the array contains three increasing adjacent numbers.
#define SIZE 5
int main()
{
	char i;				//character variable declaration
	int arr[SIZE];		//array declaration
	printf("Enter the Element\n");		//Entering the array element
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE-2;i++)	//loop is size -2 
	{
		if((arr[i]==arr[i+1]-1) && ( arr[i+1] == arr[i+2]-1))	//condition is checked array of 1 index is less than one to array of index 2
		{														//and array of 2 index is less than one to array of index 3 	
			printf("Sequence of number is %d %d %d\n",arr[i],arr[i+1],arr[i+2]);
		}
	}
	return 0;
}
