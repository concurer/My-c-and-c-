#include<stdio.h>
#include<conio.h>
int main()
{
    int max1[4][4]max2[4][4],
    printf("enter the first matrix : ");

    for(int i=0 ; i<=3 ;i++)
    {
        for(int j=0 ; j<=3 ;j++)
        {
            scanf("%d",&max1[i][j]);
        }
    }

    printf("enter the second matrix :");

    for(int i=0 ; i<=3 ;i++)
    {
        for(int j=0 ; j<=3 ;j++)
        {
            scanf("%d",&max2[i][j]);
        }
    }

    //substaracting two matrix
    for(int i=0 ; i<=3 ;i++)
    {
        for(int j=0 ; j<=3 ;j++)
        {
          max3[i][j]=max1[i][j]-max2[i][j];
        }

    }

    //displaying resultant matrix
    for(int i=0 ; i<=3 ;i++)
    {
        for(int j=0 ; j<=3 ;j++)
        {
            printf("%d",max3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
