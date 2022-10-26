#include<stdio.h>
void main()
{
    int a = 10,b=1;
    int r = 0;
    r = a&b;
    printf("Binary AND operator of a and b : %d\n",r);
    r=a^b;
    printf(" Binary ^ : %d\n",r);
    r=~a;
    printf("~ : %d\n",r);
    r=a<<2;
    printf("<< : %d\n",r);
    r=a>>2;
    printf(">> : %d\n",r);
}