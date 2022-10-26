#include<stdio.h>
int fib(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    else
    {
    return(fib (i-1) +(i-2));
    }
}
int main()

{  int i;
    for(i=0;i<5;i++)
    {
        printf("i value is %d\n",fib(i));

    }
    return 0;
}