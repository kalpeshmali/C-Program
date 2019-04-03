#include<stdio.h>
int main()
{
    int num1,i,num2,count=0,j=0;
    scanf("%d ",&num1);
    int arr1[num1];
    for(i=0;i<num1;i++)
    scanf("%d",&arr1[i]);
    
    scanf("%d",&num2);
    int arr2[num2];
    for(i=0;i<num2;i++)
    {
        scanf("%d",&arr2[i]);
    
	}
    for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
		{
			if(arr2[i]==arr1[j])
			{
				count++;	
			}	
		}	
        if(count>0)
        {
            printf("%d\n",count);
        }
        else
        {
            printf("NOT PRESENT\n");
        }
        count = 0;
    }
 
      
}
