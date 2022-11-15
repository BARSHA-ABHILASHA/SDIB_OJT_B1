#include<stdio.h>  
#include <string.h>    
int main(){    
  char s[10]={'h', 'e', 'l', 'l', 'o', '\0'};    
   char s2[10]={'a','b', '\0'};    
   strcat(s,s2);    
   printf("concatination of string is : %s",s);  


 return 0;    
}    
