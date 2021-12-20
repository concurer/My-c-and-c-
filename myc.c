#include<stdio.h>

int main()
{
  struct abc
 {
    int a;
    char b;

  };
  struct abc x[2];
  struct abc *y;
  y=&x;
   printf("%u \n",y);
   y++;
   printf("%u",y);
   printf(" %d %d ",sizeof(int),sizeof(float));
   return 0;

}
