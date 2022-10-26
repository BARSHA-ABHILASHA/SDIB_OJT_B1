#include<stdio.h>
int main()
{
    
int number=5;        
int *p;     
p=&number;       
printf("Address of p variable is %d \n",p);        
p=++p;     
printf("After increment: Address of p variable is %d \n",p);      
return 0;  
}
