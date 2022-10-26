#include <stdio.h>  
int main()  
{  
   const  int a=1;  
     
    int *ptr;  
    ptr=&a;  
   printf("%d %p\n",a,ptr);
   ++ptr;
   ++*ptr;
    printf("Value of ptr is :%d",ptr);  
    return 0;  
}  

