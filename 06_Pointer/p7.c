#include<stdio.h>
void main()
{
  int a[6]={2,6,7,1,9},*p;
  p=a;
  *++p;
  printf("%d",*p);
  *p++;
   p += 3;
    printf("%d\n",*p);
return 0;
}