// Write a C program to reverse a given array of integers.
#define SIZE 5			//size is declared
int main()
{
	char i,j=SIZE-1;			//declaring char variable
	int arr[SIZE],temp;			//declaring array and temp variable
	printf("Enter the number in array\n");		//entering the number in array
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE/2;i++,j--)		//reverse the array in for loop
	{
		temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("Reverse number is\n");
	for(i=0;i<SIZE;i++)			//printing the number Write a program to convert user steps into distance. First take the calibration input (1 step of user is equivalent of how many meters) then take the number of steps user has walked.
If distance is less than 1km, then display the distance in meters (without fraction part), if distance is more than a km, then display the distance in A.Z format (ex: 1.3km, 5.6km etc.).

	{
		printf("%d\n",arr[i]);
	}
}
