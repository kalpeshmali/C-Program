//program to retrieve the higher nibbles of each byte and store it in a 16 bit variable.

#include<stdio.h>
int main()
{
	int i,temp1,number,c;
	number=0x12345678; 
	
	for(i=24;i>=0;i=i-8)
	{
		temp1=number>>i;
		c=temp1& 0xff;
		q=c>>4;
		printf("%x ",q);
	}
}
/*
	a=((g>>0) & 0xff);
	printf("%x\n",a);
	p=a>>4;
	printf("p= %d\n",p);
	
	b=((g>>8) & 0xff);
	printf("%x\n",b);
	q=b>>4;
	printf("q= %d\n",q);
	
	
	c=((g>>16) & 0xff);
	printf("%x\n",c);
	r=c>>4;
	printf("r= %d\n",r);
	
	d=((g>>24) & 0xff);
	printf("%x\n",d);
	s=d>>4;
	printf("s= %d\n",s);
	
	z=(s*1000)+(r*100)+ (q*10) + (p);
	printf("%d\n",z);
	
	

*/
