#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct emp e[10];
    int i;
    for (i=0;i<10;i++)
    {
        printf("Enter id, name and salary of employee:\n");
        scanf("%d %s %f ",&e[i].id,&e[i].name,e[i].salary);   
    }
    printf("enter details are:");

    for(i=0;i<10;i++)
    {
    printf("id: %d\n",e[i].id);
    printf("name : %s\n",e[i].name);
    printf("salary: %f \n",e[i].salary);   
    }
return 0;
}
