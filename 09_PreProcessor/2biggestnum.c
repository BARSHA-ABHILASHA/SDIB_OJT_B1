#include<stdio.h>
#define BIG(x,y) (x>y) ? x: y

int main()
{
    int a,b,result;
    char y ='F', z ='S';
    printf("\n enter any two integer");
    scanf("%d %d",&a,&b);
    printf("\n Biggest of Two numbers: %d\n",BIG(a,b));
    printf("\n Biggest of Two char: %c\n",BIG(y,z));
    printf("\n Biggest of Two float: %c\n",BIG(10.23,24.45));
       
}