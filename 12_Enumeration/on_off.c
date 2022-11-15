#include<stdio.h>
enum states{ON,OFF};
int main()
{
int n;
enum states ;
printf("enter the no");
scanf("%d",&n);
if (n==OFF)
{
    printf("OFF");
}
else
{
    printf("ON");
}
return 0;
}