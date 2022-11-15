#include<stdio.h>
struct emp   
{   int id;      
    char name[50];
    float salary;  
    char designation[40]; 
};  
int main()
{
struct emp e;

    printf("\nEntered detail is:\n");
     printf("Id: %d\n",e.id); 
     scanf("%d",&e.id);
    
     printf("Name: %s",e.name);
     scanf("%s",&e.name);
    
      printf("Salary: %f\n",e.salary);
      scanf("%d",&e.salary);
    
   printf("designation: %s" ,e.designation);
   scanf("%s",&e.designation);
    
      

     printf("\nDisplaying Information\n"); 

    printf("id: %d\n",e.id);
    printf("Name: %s\n",e.name);
    printf("salary: %f\n",e.salary);
    printf("designation: %s\n",e.designation);
    return 0;
}
