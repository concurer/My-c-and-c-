#include<stdio.h>
#include<conio.h>
int main()
{
    //palendrom
    int n,n2,rev=0,d;
    printf("Enter your number : ");
    scanf("%d",&n);
    n2=n;
    while(n!=0)
    {
        d=n%10;
        rev = rev * 10 + d;
        n=n/10;
    }
    printf("rev of the digits is : %d \n",rev);
    if(rev==n2)
        printf("Palendrom");
    else
        printf("not palendrom");
    return 0;
}
