#include<stdio.h>
#include<math.h>
void main()
{
	int m,n,o,p;
	
	float c,d,x,y,percentage,area1,area2;
	scanf("%d %d",&m,&n);
	scanf("%f",&c);
	scanf("%d %d",&o,&p);
	scanf("%f",&d);
	
	x=c/2.236;
	y=d/2.236;
	
    area1=(2*x)*(x);
    area2=(2*y)*(y);
    
percentage=(area1/area2)*100;
printf("%f",percentage);
}

