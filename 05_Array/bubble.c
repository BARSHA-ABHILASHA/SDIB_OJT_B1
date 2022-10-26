#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[10];
 int n,i,j,temp;
 printf("\n enter number of elements (1-10):");
 scanf("%d",&n);
 if (n>10)
 {
    printf("excess value");
    exit(1);
 }
 printf("enter elements \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
  printf("Before sorting: \n");
 for(i=0;i<n;i++) 
 printf("%d",a[i]);

 for ( i=0;i<n;i++)
 {
   for ( j=0;j<n-1;j++)
   if (a[j]>a[j+1])
   {
      temp = a[j];
      a[j] =a[j+1];
      a[j+1]=temp;
   }
 }
 printf("\n After sorting:\n");
 for(i=0;i<n;i++)
  printf("%d",a[i]);
 return 0;
}