#include <stdio.h>
int main()
{
     int a = 20;
 const int*ptr=&a ;

      *ptr++;
    printf("%d",*ptr++);
 return 0;
  } 