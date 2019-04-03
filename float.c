
#include<stdio.h> 
  
enum week{Mon, Tue, Wed=656000, Thur, Fri, Sat, Sun}; 
  
int main() 
{ 
    enum week day; 
    day = Wed; 
    printf("sizeof = %d",sizeof( enum week)); 
    return 0; 
}  
