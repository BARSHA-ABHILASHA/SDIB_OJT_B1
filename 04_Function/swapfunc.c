#include<stdio.h>  
  int swap(int, int);  
 int main()  
{  
   int a =4, b=7; 
    printf("Before swapping: a=%d &  b=%d\n", a, b);  
    swap(a, b);  
}  
  int swap(int a, int b)  
{  
    int temp;  
    temp = a;  
    a   = b;  
    b = temp;  
    printf("After swapping: a=%d  &  b=%d\n", a, b);
    return 0;
}