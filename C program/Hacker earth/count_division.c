#include<stdio.h>
int main()
{
	int i,l,r,k,count=1;
	scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    printf("count %d\n",count);
}
