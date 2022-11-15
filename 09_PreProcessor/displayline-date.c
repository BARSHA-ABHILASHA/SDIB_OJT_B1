#include<stdio.h>
// #include<unixio.h>
void disp();
int main()
{
    int a=10,b=10;
    printf("\n File in use: %s\n",__FILE__);
    printf("\n Present Line: %d",__LINE__);
    printf("\n Present Function: %s\n",__func__); //Specified to C99
    disp();
    printf("\n Present Date: %s\n",__DATE__);
    printf("\n Standard C: %d",__STDC__);
    //#if defined(__STDC__VERSION)
    //printf("\n Standard C Version:%d",__STDC__VERSION__);
    //#endif
    printf("\n");
}
void disp()
{
    printf("\n Present Function: %s",__FUNCTION__);
}