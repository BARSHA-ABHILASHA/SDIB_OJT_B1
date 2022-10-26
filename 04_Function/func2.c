#include <stdio.h>
int sum_2(int x, int y)
{
    return x + y;
}
int mul_2()
    {
        return 0;
    }
int sub_2()
{
    return 0;
}
int div_2(int x, int y)
    {
        return x / y;
    }
    int main()
{
    int a, b, sum , mul,sub ,div ;
    printf("Enter the number a,b: ");
    scanf("%d %d", &a , &b);
    sum = sum_2(a, b);
    mul = mul_2(a, b);
    sub = sub_2(a, b);
    div= div_2(a, b);
    printf("Sum of two numbers: %d", sum);
    printf("mul of two numbers: %d", mul);
    printf("Sub of two numbers: %d", sub);
    printf("div of two numbers: %d", div);
    return 0;
}

