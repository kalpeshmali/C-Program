//Program for match finder as per professional and heighte
#include<stdio.h>	//header file
#include<string.h>
#define SIZE 5		//Macro define size 5
struct information		// Structure defined by Men
{
	char name[SIZE];
	int height;
	char profession[20];
};

struct information m1[SIZE],w1;		//m1 is array of object of men structure
void print_information(int i)	//print the information of match finder
{
	printf("\nThe match finder\n");
	printf("\tMen \t\t\tWoman\n");
	printf("%s %d  %s\t\t\t %s %d %s\n",m1[i].name,m1[i].height,m1[i].profession,w1.name,w1.height,w1.profession);
}
int main()
{
		short int i,index,curre_difference,difference;    //variable declaration
		printf("Enter the women information\n");			//Entering woman information
		scanf("%s%d%s",&w1.name,&w1.height,&w1.profession);	
		
		printf("Enter the Men information\n");			//Entering  man information name ,height and profession
		for(i=0;i<SIZE;i++)
		{
			printf("Enter the %d man name\n",i+1);
			scanf("%s",&m1[i].name);
			printf("Enter the man height\n");
			scanf("%d",&m1[i].height);
			printf("Enter the man profession\n");
			scanf("%s",&m1[i].profession);
			system("cls");
			if(strcmp(w1.profession,m1[i].profession)==0)	//comparing woman and men profession 
			{
				print_information(i);						//function calling
				return 0;
			}
			else if(w1.height==m1[i].height)				//comparing woman height and man height
			{
				print_information(i);						//function calling
				return 0;	
			}
		}	
		
		/*  this code is find the nearest woman height to man height */
		index=0;
 		curre_difference = m1[0].height-w1.height;
		for(i=1;i<=SIZE;i++)
		{
			difference = m1[i].height-w1.height;
			if(difference<curre_difference)
			{
				curre_difference = difference;
				index = i;
			}
		}	
		print_information(index);
		
}
