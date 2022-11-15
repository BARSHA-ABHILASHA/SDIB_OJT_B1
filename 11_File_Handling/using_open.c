#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{   
  int  fd;
    fd=("hello.txt",O_WRONLY);
    if(fd==0)
    {
        printf("Fail to create file:");
       exit(1);
    }
    printf("file created sucessfull");
}