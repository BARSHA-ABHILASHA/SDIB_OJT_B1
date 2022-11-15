#include<stdio.h>
struct student
{
 int rollno;
 char *name;
}a[3];
void display (struct student std[]);
void main()
    {
        a[0].rollno=01;
        a[0].name="barsha";
        a[1].rollno=02;
        a[1].name="barsha1";
        a[2].rollno=03;
        a[2].name="barsha2";
           
        dispaly(a);
    }  
void display(struct student a[])
{
     int i;
     for(i=0;i<3;i++)
     {
        printf("\roll no is :%d name is %s",a[i].rollno,a[i].name);
     }
}