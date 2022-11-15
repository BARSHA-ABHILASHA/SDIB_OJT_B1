#include<stdio.h>
#pragma pack(1)
struct student
{
      char name;
      float height;
      int age;
      int adhar;
};
int main()
{
    struct student s;
    printf("Size of struct : %d\n", sizeof(struct student));
    return 0;
}