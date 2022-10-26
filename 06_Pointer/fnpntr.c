#include<stdio.h>

   int (*fnptr)(int ,int);
   int add (int x,int y)
{   
    return x+y;
}
int sub (int x,int y)
{
    return x-y;
}
int mul (int x,int y)
{
    return x*y;
}
int div (int x,int y)
{
    return x/y;
}
int main()
{
   int a,b,c,d;
   fnptr=&add;
   a=(*fnptr)(4,4);
   printf("%d",a);
   
   fnptr=&sub;
   b=(*fnptr)(4,4);
   printf("%d",b);
   fnptr=&mul;
   c=(*fnptr)(4,4);
     printf("%d",c);
   
   
   fnptr=&div;
   d=(*fnptr)(4,4);
    printf("%d",d);
   
}



