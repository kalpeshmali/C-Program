//Program for match finder as per professional and heighte
#include<stdio.h>	//header file
#include<string.h>
#define SIZE 3
struct woman	
{
	char name[20];
	int height;
	char profession[20];
}w1;
struct men	
{
		char name[20];
		int height;
		char profession[20];
};
int main()
{
	
		short int i,index,curre_difference,difference=0;    
		printf("Enter the women information\n");		
		scanf("%s%d%s",&w1.name,&w1.height,&w1.profession);	
				
	 	struct men m1[SIZE]={{"kalpesh",8,"Civil"},{"Nikhil",9,"Mech"},{"mama",12,"computer"}};
	 		
		for(i=0;i<SIZE;i++)
		{
			if(strcmp(w1.profession,m1[i].profession)==0)	
			{
				printf("%s %d %s\n%s %d %s\n",m1[i].name ,m1[i].height ,m1[i].profession ,w1.name ,w1.height ,w1.profession);						
				return 0;
			}
			else if(w1.height==m1[i].height)			
			{
				printf("%s %d %s\n%s %d %s\n",m1[i].name ,m1[i].height ,m1[i].profession ,w1.name ,w1.height ,w1.profession);	
				return 0;	
			}
		}	
		
		/*  this code is find the nearest woman height to man height */
		index=0;
 		curre_difference = abs(m1[0].height-w1.height);
 		
		for(i=1;i<=SIZE;i++)
		{
			difference = abs(m1[i].height-w1.height);
			if(difference<=curre_difference)
			{
				curre_difference = difference;
				index = i;
			}
		}
		printf("%s %d %s\n%s %d %s\n",m1[index].name ,m1[index].height ,m1[index].profession ,w1.name ,w1.height ,w1.profession);
		
}
