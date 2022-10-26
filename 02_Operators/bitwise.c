#include <stdio.h>
int main()
 {
    int a = 12, b = 25;
    printf("Output = %d \n %d \n %d \n %d \n %d\n", a & b ,a |b, a^b , a>>1,a<<1); //N=N*(2^2) leftshift, N=N/(2^2) rightshift 
    return 0;
}