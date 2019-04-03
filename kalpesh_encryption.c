//Simple C program to encrypt and decrypt a string

#include <stdio.h>

int main()
{
   int i, key;
   char str[100],num;

   printf("\nPlease enter a string:\n");
   scanf("%s",str);
   printf("Enter key\n");
   scanf("%d",&key);
	for(i = 0; (i < 100 && str[i+1] != '\0'); i++)
        str[i] = str[i] + key; 
	
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
