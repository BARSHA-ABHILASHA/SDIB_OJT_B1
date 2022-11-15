#include<stdio.h>  
#include <string.h>    
int main()
{    
 char ch[20], ch2[20];  
 printf("Enter string:\n");
 gets(ch);  

   strcpy(ch2,ch);    
   printf("copied string is: %s",ch2);      
 return 0;    
}    
