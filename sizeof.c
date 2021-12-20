#include<stdio.h>
int main()
{
 int a=10;
 float b=20.3034;
 double c=23.809890909;
 char d='M';
 /*the sizeof operator is used to see the size of the variable in the program*/
 printf(" size of int = %d\n size of float is = %d\n size of double = %d\n size of char = %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
 return 0;
}
