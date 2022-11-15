#include<stdio.h>
void add(void);
#define ADDITION() add()   //Macro takes no argument

int main()
{
    ADDITION();
}
void add (void)
{
    printf("\n 10+20 =%d\n0",10+20);
}