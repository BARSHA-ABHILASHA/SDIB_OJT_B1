#include<stdio.h>
int add(int x,int y)

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
int operation (int  ,int ,int(*fnptr)(int ,int ));
int main()
{   int x=6,y=7;
    char choice;
     printf("enter choice:");
  scanf("%c", &choice);
  switch(choice)
  { 
   case  '+':
   operation(x,y,add);
    break;
   case  '-':
    operation(x,y,sub);
    break;
   case  '*':
     operation(x,y,mul);
    break;
   case  '/':
     operation(x,y,div);
    break ;
   default:
      printf ("invalid choice");
   }
}



int operation (int x ,int y,int (*fnptr)(int ,int ))
{
int result;
result = fnptr(x,y);
printf("%d",result);
}



