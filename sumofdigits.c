#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n2,sum=0 ,d;
    printf("Enter your number : ");
    scanf("%d",&n);
    n2=n;
    while(n!=0)
    {
        d=n%10;
        sum = sum + d*d*d;
        n=n/10;
    }
    printf("Sum of the digits is : %d \n",sum);

    if(sum == n2)
        printf("It is an Amstrong number");
    else
        printf("it is not an Amstrong number");
    return 0;
}
