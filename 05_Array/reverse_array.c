#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter any  elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe array elements in reverse order:\n");
    for(i=4; i>=0; i--)
    {
        if(i==0)
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
   
    return 0;
}