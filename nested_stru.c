#include<stdio.h>








	struct student
	{
		int roll_no;
		char name[10];
		struct marks
		{
			int sub1,sub2;
		};
	}s1;

int main()
{
	struct marks m1;
	printf("Enter the Student Information\n");
	printf("Enter the Roll Number\n");
	scanf("%d",&s1.roll_no);
	
	printf("Enter the Name\n");
	scanf("%d",&s1.name);
	fflush(stdin);
	printf("Enter Two  subject marks\n");
	scanf("%d%d",&m1.sub1,&m1.sub2);
}
