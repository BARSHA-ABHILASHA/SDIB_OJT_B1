#include <stdio.h>
int sum_2(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b, sum ;
    printf("Enter the number a,b: ");
    scanf("%d %d", &a , &b);
    sum = sum_2(a, b); 
    printf("Sum of two numbers: %d", sum);
    return 0;
}

