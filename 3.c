#include<stdio.h>

	void main()
{
	char s[100],l,i,j,d[100];
	scanf("%s",&s);
	for(l=0;s[l];l++);
	for(i=0,j=l-1;s[i];i++,j--)
	{
		d[j]=s[i];
	}
	if(strcmp(s,d))
	printf("no");
	else
	printf("yes");
}
