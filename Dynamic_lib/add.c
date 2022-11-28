#include<stdio.h>
#include"lib.h"
int main()
{
   int a,b;
   printf("Enter two values:");
   scanf("%d%d",&a,&b);
   printf("Sum is: %d",add(a,b));
   return 0;
}