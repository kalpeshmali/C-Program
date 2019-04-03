//Simple C program to encrypt and decrypt a string

#include <stdio.h>

int main()
{
   int i, key=4,num,aci;
   char str[100]="All-convoYs-9-be:Alert1.";

   //printf("\nPlease enter a string:\n");
   //scanf("%s",str);
  // printf("Enter key\n");
   //scanf("%d",&key);
	for(i = 0; (i < 100 && str[i+1] != '\0'); i++)
	{
			aci=str[i]+key;
			printf(" %c = %d\n",str[i],aci);
		if((str[i]=='.')||(str[i]=='-'))
		{
			continue;
		}
		if((aci>94) && (aci<65))
		{
			printf("%c ",str[i]);
			str[i]=str[i]+key;
			num=str[i]%97;
			str[i]='A'+key;	
		}
		else if((aci>122) && (aci<97))
		{
			printf("%c ",str[i]);
			str[i]=str[i]+key;
			num=str[i]%97;
			str[i]='a'+key;
		}	
		else
		{
			str[i]=str[i]+key;
		}
	}
	
	num=str[i];
	if(num+key <= '9')
	{
		num=num+key;
		str[i]=num;
	}
	else
	{
		num=(num+key)-10;
		str[i]=num;
	}
	i++;
	str[i]='\0';
	printf("\nEncrypted string: %s\n", str);
    
    return 0;
}

