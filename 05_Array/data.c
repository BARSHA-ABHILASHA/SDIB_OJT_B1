#include<stdio.h>
#pragma pack(1)
struct data
{
    unsigned int a:4;
    char ch:1;
};

int main()
{
    struct data D ={10,'A'};
    printf("%d",sizeof(D));
}
