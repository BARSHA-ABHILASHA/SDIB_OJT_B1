#include<stdio.h>
void main(){
    int a = 10,b=6;
    printf("Value of a&b %d\n",a&b);
    printf("Value of a|b : %d\n",a|b);
    printf("Value of a^b : %d\n",a^b);
    printf("Value ofa&b && b+1 || 0 : %d\n",a&b && b+1  || 0);
}