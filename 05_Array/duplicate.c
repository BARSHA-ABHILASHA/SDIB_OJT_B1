#include <stdio.h>  
   
int main()  
{  
    int a[7] = {1, 2, 3, 4, 2, 1, 3};   
      
      
    int len = sizeof(a)/sizeof(a[7]);  
      
    printf("REpeated number in a array: \n");  
      
    for( int i = 0; i < len; i++) 
    {  
        for( int j = i + 1; j < len; j++) 
        {  
            if(a[i] == a[j])  
                printf("%d\n", a[j]);  
        }  
    }  
    return 0;  
}  