#include<stdio.h>
enum days{January=1,February,March,April,May,June,July,August,September,October,November,December};
int main()
{
    for(int i=January;i<=December;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}