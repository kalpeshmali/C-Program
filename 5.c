#include<stdio.h>
int count(int n);
void main()
{
	int n[5],i,j,k,temp,p,q;
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
for(k=0;k<4;k++)
{
	printf("iteration %d   -------------------\n",k);
	for(j=0;j<4;j++)
	{
		
		p=count(n[j]);
		q=count(n[j+1]);
	
		if(p>q){
			
		temp=n[j];
		n[j]=n[j+1];
		n[j+1]=temp;
		}	
		else if(p==q)
		 {
		 	if(n[j]>n[j+1])
		 	{
			 
		 
			temp=n[j];
			n[j]=n[j+1];
			n[j+1]=temp;
		 } 
		}
		 else
		 {
		 	
		 }
	}
	for(i=0;i<5;i++)
	printf("%d",n[i]);
	
}

	for(i=0;i<5;i++)
	printf("%d",n[i]);
}
int count(int n)
{
	int k,c=0;
	for(k=31;k>=0;k--)
	if((n>>k)&1)
	c++;
	return(c);
}
