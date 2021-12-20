#include<stdio.h>

float GaussJordan();


 int main()

{
     GaussJordan();
     return(0);
}


float GaussJordan()
{
    int coe;
    printf("Enter the no. of unknowns:\n");
    scanf("%d",&coe);

    float a[coe][coe+1];
    int b[coe];
    int i,j,t,m,n;
    for(i=0;i<coe;i++)
    {
        b[i]=i+1;
    }

    for(i=0;i<coe;i++)
    {
        printf("\n\nEquation %d\n",i+1);
        for(j=0;j<=coe;j++)
        {
            if(j!=coe)
            {
                printf("coefficient of UK%d is: \t",b[j]);
                scanf("%f",&a[i][j]);
            }
            else
            {
                printf("constant is:");
                scanf("%f",&a[i][j]);
            }
        }
    }
    for(i=0;i<coe;i++)
    {
        for(j=0;j<=coe;j++)
        {
            printf("%f\t",a[i][j]);

        }
        printf("\n");
    }
    //main jordan  method by matrix

    for(j=0;j<coe;j++)
    {
        for(i=0;i<coe;i++)
        {
            if(i==j)
            {
                for(t=0;t<=coe;t++)
                {
                    a[i][t]/=a[i][i];

                }
            }
            else
            {
                for(t=0;t<=coe;t++)
                {
                    a[i][t]=a[i][t]-((a[j][t]*a[i][j])/a[j][j]);
                }
            }
        }

    }

    printf("The value of\n");

    for(i=0;i<coe;i++)
    {
        printf("UK%d = %f\n",i,a[i][coe+1]);
    }


    return(0);
}
