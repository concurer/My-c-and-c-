#include<stdio.h>
#include<conio.h>
int main()
{
    int num[10],p=0,n=0,z=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for( int j=0;j<10;j++)
    {
        if(num[j]>0)
        {
            p=p+1;
        }
        else if(num[j]<0)
        {
            n=n+1;
        }
        else{
            z=z+1;
        }
    }
    printf("positive = %d \n negetive = %d \n zero = %d",p,n,z);
}
