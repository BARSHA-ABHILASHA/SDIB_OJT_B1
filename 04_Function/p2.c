#include<stdio.h>
int fin(int);
int main()
{
    float k=3;
    float k = fun(fun(k));
    printf("%f\n",k);
    return 0;
}
int fun(int i)
{
    i++;
    return ;
}