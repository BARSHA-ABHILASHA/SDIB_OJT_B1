#include<stdio.h>
#include<string.h>

int employee()
{
    int code;
    char name[20];
    int salary;
};

void printEmployeeDetails();

void printEmployeeDetails()
{
    printf("Employee CODE is: %d\n" ,&code);
    printf("Employee NAME is: %s\n" ,&name);
    printf("Employee SALARy is: %d\n",&salary);     

}

int main(){
    int employee e;
    printf("Enter your CODE\n");
    scanf("%d",&code);

    printf("Enter your NAME\n");
    scanf("%d",&name);

    printf("Enter your SALARY\n");
    scanf("%d",&salary);

    printEmployeeDetails(e);

    return 0;
}