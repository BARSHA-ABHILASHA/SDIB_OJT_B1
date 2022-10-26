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
{ int choice;
  printf("enter choice:");
  scanf("%d", &choice);
  switch(choice)
  {
   int a,b,c,d;
   case 1:
        fnptr=&add;
        a=(*fnptr)(4,4);
         printf("%d",a);
    break ;
   
    case 2:
        fnptr=&sub;
        b=(*fnptr)(4,4);
       printf("%d",b);
    break ;
   
   case 3:
        fnptr=&mul;
        c=(*fnptr)(4,4);
        printf("%d",c);
    case 4:
        fnptr=&div;
        d=(*fnptr)(4,4);
       printf("%d",d);
    break ;
   default:
      printf ("invalid choice");
   
  
}
}

