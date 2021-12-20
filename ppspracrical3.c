#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1 , n , f=1;
 printf("Enter the num you need factorial of : ");
 scanf("%d",&n);
 while(i<=n)
 {
     f=f*i;
     i+=1;
 }
 printf("%d! is the factorial of %d",f,n);
 return 0;
}
