/* 13 question */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=7;
    for(int i=6;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",i-j);
        }
        printf("\n");
    }
    return 0;
}
