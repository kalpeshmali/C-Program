/* Write a program to convert user steps into distance. 
 First take the calibration input (1 step of user is equivalent of how many meters) then take the number of steps user has walked.
If distance is less than 1km, then display the distance in meters (without fraction part), 
if distance is more than a km, then display the distance in A.Z format (ex: 1.3km, 5.6km etc.). */
#include<stdio.h>
#define METER 1000
int main()
{
	float calib_input,distance;			//floting variable declaration
	int step_walk;
	scanf("%f",&calib_input,printf("Enter the calibration input\n"));//entering the calibration input
	printf("1 meter == %.2f calib input\n",calib_input);		//printing the message 1 meter is equal to how many calibration input
	scanf("%d",&step_walk,printf("How many step he walked\n"));		//entering the how many step he walked
	
	distance=calib_input *step_walk;			//calculate the distance
	if(distance>METER)							//distance is greater than KM result should be printed in KMformat
	{
		distance=distance/METER;
		printf("%.2f METER",distance);
		return 0;
	}
	else									//condition is false result should be printed in meter format
	{
		printf("%.2f meter\n",distance);
		return 0;
	}
	
}

