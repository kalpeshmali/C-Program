#include<stdio.h>
void main()
{
    int n,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf(" \b %d " ,i);
    }
    getch();
}
