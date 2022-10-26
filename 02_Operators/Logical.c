#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, res;

    res = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", res);

    res = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", res);

    res = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", res);

    res = !(a != b);
    printf("!(a != b) is %d \n", res);

    res = !(a == b);
    printf("!(a == b) is %d \n", res);

    return 0;
}
