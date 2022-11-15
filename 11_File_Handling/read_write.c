#include <stdio.h>
#include<stdlib.h>
int main() 
{
  char name [20],ch; 
  FILE *fp;                                             //Declaring File Pointer
  printf("\n Enter new File Name:");
  scanf("%[^\n]",name);
fp  = fopen (name,"w+");                                //Opening a file in write mode & read mode
if(fp==NULL)
{
    printf("\n Fail to Create the File\n",name);
    exit(1);
}
printf("\n file created");
printf(" \n Enter data into File & Press\"clte+c\"to end\n");
while ((ch = getchar())!=EOF)                          
           putc(ch,fp);                              //writes ch into file pointed by file pointer
    fseek(fp,10,SEEK_SET);

    printf("\n\n Data in File \n");
    while ((ch = getc(fp))!=EOF)                      //reads data from file    
           putchar(ch);
    fclose(fp);
}