// p_2 one two three
/* p_2.c*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc ,char **argv)
{
    printf("%s\n",*++argv);
    return 0;
}