#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{
    student s;
    FILE *ptr;
    ptr=fopen("Student.dat","r");
    printf("Enter Student Details\n");
    while((fscanf(ptr,"%d %[^\t] %d %c",&s.roll,&s.name,&s.age,&s.gender))!=EOF);
    {
       printf("\n%5d %20s %4d %1c\n",s.roll,s.name,s.age,s.gender);
    }
   printf("\n");
    fclose(ptr);
}