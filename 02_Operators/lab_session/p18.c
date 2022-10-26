#include<stdio.h>
void main()
{
    int ram,shyam,ajay,age=0;
    printf("Enter the age of RAM,SHYAM,AJAY:\n");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram < shyam && ram < ajay)
    {
        printf("RAM is YOUNGEST");
    }
    
}