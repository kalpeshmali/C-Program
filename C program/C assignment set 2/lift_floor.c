/*
A new apartment with 9 floors is built and a lift is being installed there. 
Write a program for lift to display the number. Each floor number has to be displayed until we reach the destination floor.
For ex: If user is in 0th floor and presses 5, then pattern should be as below,
0  1(2sec)  2(2sec)  3(2sec)  4(2sec)  5(stop here).
Now if user presses 3,
5(previous floor)  4(2sec)  3(stop).*/

static int size=0;
int main()
{
	static int num=0;
	int floor,i;
	do
	{
	
		scanf("%d",&floor,printf("Enter  the Floore number or u want to exit press 6\n"));
		if(floor == 6)
		{
			return 0;
		}
		static int size=0;
		if(floor>size)
		{
		
			for(;size<=floor;size++)
			{
				printf("floor %d\n",size);
				sleep(2);
			}
			size--;
		}
		else if(size>=floor)
		{
			
			for(;size>=floor;size--)
			{
				printf("floor %d\n",size);
				sleep(2);
			}
			size++;
		}
	}while(1);
	
	
}
