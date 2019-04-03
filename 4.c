#include<stdio.h>
void main()
{ 
 char s[100];
 int n,i;
 scanf("%s",s);
 scanf("%d",&n);
 for(i=0;s[i];i++)
 {
 	
 	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
 	s[i]=s[i]+n;
 	if(s[i]>='0'&&s[i]<='9')
 	s[i]=((s[i])+n)-10;
 }
 printf("%s",s);
}
