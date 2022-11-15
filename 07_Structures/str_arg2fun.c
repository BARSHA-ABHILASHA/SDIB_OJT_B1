#include<stdio.h>
struct arith
{
    int a,b ,result;
};
struct arith add(struct arith A)
{
    A.result=A.a+A.b;
    printf("%d",A.result);
}
int main ()
{
struct arith A;
   printf("enter value for a & b:");
   scanf("%d %d ",&A.a,&A.b);
   A=add(A);
   

}