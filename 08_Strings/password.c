#include<stdio.h>  
#include <string.h>    
int main()
{
    char s1[]= "copy";
    char s2[5];
int a;
   printf("Please enter your password: ");
   scanf(s2);
   a = strcmp(s1, s2);


if(strcmp(s1, s2)==0)   
      printf("Password is verified");    
else    
      printf("Password not valid");    
 return 0;    
}    
  
  



