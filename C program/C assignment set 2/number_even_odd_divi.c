/* Write a C program to count even number of elements, 
	odd number of elements and number divisible by 3 in a given array of integers (length 10).*/
#define SIZE 10
int main()
{
	int arr[SIZE];
	char i,even=0,odd=0,divisible=0;
	printf("Enter the array of element\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		if(arr[i] %2 == 0 ? even++ : odd++)
		if(arr[i]%3==0)
		{
			divisible++;
		}
	}
	printf("even number of elements = %d \n",even);
	printf("Odd number of elements = %d \n",odd);
	printf("Number is divisible by 3 = %d \n",divisible);
}
