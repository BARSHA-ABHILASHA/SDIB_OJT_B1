#include<stdio.h>
 int main()
    {
    struct C
    {
        double z;
        int x ;
       short int y;
    };
        printf("Size of struct:%ld\n",sizeof(struct C));
        return 0;
    }

