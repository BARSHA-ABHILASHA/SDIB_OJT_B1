#include<stdio.h> 
#include<string.h> 
struct Student    
{   int id;      
    char name[50];
    float height;   
};  
int main( )    
{    
       
   struct Student  s1, s2;
    s1.id=1;    
   strcpy(s1.name ,"Sonoo Jaiswal");
    s1.height=5.0;  
   
   printf( "student 1 id : %d\n", s1.id);    
   printf( "student 1 name : %s\n", s1.name);    
   printf( "student 1 height : %f\n", s1.height); 

    s2.id=2;    
    strcpy(s2.name ,"Ankita Chetrii");
    s2.height=5.4;  
   
   printf( "student 2 id : %d\n", s2.id);    
   printf( "student 2 name : %s\n", s2.name);    
   printf( "student 2 height : %f\n", s2.height); 
return 0;  
}