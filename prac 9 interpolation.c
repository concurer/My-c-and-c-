#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf(" Give the data number of data points : ");
    scanf("%d",&n);
    float arrx[n],arry[n];

    for( int i=0 ;i < n; i++)
    {
        printf("\n Enter the value of x%d : ",i);
        scanf("%f",&arrx[i]);
        printf("\t Enter the f%d value :  ",i);
        scanf("%f",&arry[i]);
    }

    float x;
    printf("\n Enter the value of X you wanna find F(x) of : ");
    scanf("%f",&x);

    float Num[n] , Deno[n] , Mul[n];
    for(int i=0;i<n;i++)
    {
      Num[i] = 1;
      Deno[i] = 1;
      for(int j=0 ; j<n ; j++)
      {
          if(i==j)
          {
             //hlo
          }
          else
          {
              Num[i] = Num[i] * (x-arrx[j]);
              Deno[i] = Deno[i] * (arrx[i] - arrx[j]);
          }
      }
    }

    for(int i = 0; i<n ;i++)
    {
        Mul[i] = 1;
        Mul[i] = Num[i] * arry[i];
        Mul[i] = Mul[i] / Deno[i];
    }

    float ans = 0;
    for( int i=0; i<n ;i++)
    {
        ans = ans + Mul[i];
    }

    printf(" the value of f(%f) : %f",x,ans);
    return 0;
}
