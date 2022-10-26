#include<stdio.h>
int main()
{
    int a[5]= {1,10,78,14};
    int num ,pos,i;
    printf("enter number & position \n");
    scanf("%d %d",&num ,&pos);

    if (pos <=5 && pos>0)

    {
        for(i=5;i>pos;i--)
        a[i] = a[i-1];

        pos = num;
        for(i=0;i<=5;i++)
         printf("%d",a[i]);
    }
    else
    printf("not a valid position:");
    return 0;


}