#include<stdio.h>

float GaussJordan();


 int main()

{
     GaussJordan();
     return(0);
}

void display(){

 for(int i=0;i<3;i++)
  {
    char a;
    for(int j=0;j<4;j++)
    {
      if(j==0)
      {
          a = 'a';
      }
      else if(j==1)
      {
          a = 'b';
      }
      else if(j==2)
      {
          a = 'c';
      }
      else
      {
          a = 'd';
      }

    }
    cout<<endl;
  }
}

float GaussJordan()
{
    int coe;
    printf("Enter the no. of unknowns:\n");
    scanf("%d",&coe);

    float arr[coe][coe+1];
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
                scanf("%f",&arr[i][j]);
            }
            else
            {
                printf("constant is:");
                scanf("%f",&arr[i][j]);
            }
        }
    }
    for(i=0;i<coe;i++)
    {
        for(j=0;j<=coe;j++)
        {
            printf("%f\t",arr[i][j]);

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
                    arr[i][t]/=arr[i][i];

                }
            }
            else
            {
                for(t=0;t<=coe;t++)
                {
                    arr[i][t]=arr[i][t]-((arr[j][t]*arr[i][j])/arr[j][j]);
                }
            }
        }

    }

    printf("The value of\n");

    for(i=0;i<coe;i++)
    {
        printf("UK%d = %f\n",i,arr[i][coe+1]);
    }


    return(0);
}
