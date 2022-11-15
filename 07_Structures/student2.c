#include<stdio.h>
struct Student    
{   int id;      
    char name[50];
    float height; 
    float marks;    
}std;  
struct marks
{
    int math ;
    int science;
    int english;
}mark;
int main()
{    
   printf("enter student id");
   scanf("%d",&std.id);
   printf("enter student name \n");
   scanf("%c",&std.name);
   printf("enter student hight");
   scanf("%f",&std.height);
   
   printf("enter student marks is maths");
   scanf("%d",&mark.math); 
   printf("enter student marks is phy");
   scanf("%d",&mark.science); 
   printf("enter student mark is chem");
   scanf("%d",&mark.english);
   printf("%d\n",&std.id); 
   printf("%c\n",&std.name);
   printf("%f\n",&std.height);
   printf("the size is %d\n",sizeof(std));
    
    printf("%d\n",&mark.math); 
    printf("%d\n",&mark.science); 
    printf("%d\n",&mark.english);
    printf("the size is %d\n",sizeof(mark));
 return 0;
 }