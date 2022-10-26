#include<stdio.h>
int main(){

	int Length  =0;

	int arr[] = {2,4,6,8,9,4};

	printf("Size of int array:%d \n",sizeof(arr));
	printf("Size of 1 int value :%d \n",sizeof(int));

	Length  = sizeof(arr)/sizeof(int);


	printf("So, array length is:%d",Length );

	return 0;
}
