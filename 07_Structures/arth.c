#include<stdio.h>
struct arith
{
   int a,b ,res;  
}add;
 
 int addition(int a,int b)
 {
   return a+b;
 }
 int main()
 {
   
   printf("enter value for a & b:");
   scanf("%d %d ",&add.a,&add.b);
   add.res = addition(add.a,add.b);
   printf("%d",add.res);
return 0;
 }