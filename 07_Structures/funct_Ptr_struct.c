#include<stdio.h>
struct arithmatic
{
    int a,b;
    int (*fnptr)(int ,int);
};
int addition (int x,int y)
{   
    return x+y;
}
int subtraction (int x,int y)
{
    return x-y;
}

int main()
{
 struct arithmatic add,sub;
 printf("enter the values of a & b:");
 scanf("%d %d",&add.a,&add.b);
 sub=add;
 add.fnptr= addition;
 sub.fnptr = subtraction;
 printf("%d",add.fnptr(add.a,add.b));
 printf("\n%d",sub.fnptr(sub.a,sub.b));
}
