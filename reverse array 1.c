#include<stdio.h>
#include<stdlib.h>




int main()
{
 int num, *arr;
 printf("Enter the number of elements in array : ");
 scanf("%d",num);

 arr = (int*) malloc(num * sizeof(int));
 printf("%d",*arr);



}
