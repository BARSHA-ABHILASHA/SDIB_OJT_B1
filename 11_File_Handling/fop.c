#include <stdio.h>
#include<stdlib.h>
int main() 
{
  char name [20],ch; 
  FILE *fp;                                             //Declaring File Pointer
  printf("\n Enter new File Name:");
  scanf("%[^\n]",&name);
fp  = fopen (name,"r");                                //Opening a file in read mode
printf("Value of the fp is:%d",fp);
if(fp==NULL)
{
    printf("\n ERROR : Fail to open the File\n",name);
    exit(1);
}
printf("\n Data in %s File\n",name);
while ((ch = getc(fp))!=EOF)                           //reads from file
           putchar(ch);
    getchar();
    fclose(fp);
}