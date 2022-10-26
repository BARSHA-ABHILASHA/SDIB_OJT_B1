#include<stdio.h>
int main()
{
    int num=__a__123(4);
    printf("%d\n",--num);
    return 0;
}
int __a__123(int num)
{
    return(num+1);
}