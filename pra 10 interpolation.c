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
    //real code...
    float arr[n][n];
    int k = 1;
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j < n-1-i ; j++)
        {
          if(i == 0)
          {
            float div = arrx[j+k] - arrx[j];
            arr[i][j] = arry[j+k] - arry[j];
            arr[i][j] = arr[i][j] / div;
          }
          else
          {
              float div = arrx[j+k] - arrx[j];
              arr[i][j] = arr[i-1][j+1] - arr[i-1][j];
              arr[i][j] = arr[i][j] / div;
          }

        }
         k++;
    }
    float x,ele1[n],ele[n];
    printf("\nEnter the value of x : ");
    scanf("%f",&x);
    for(int i=0; i<n ;i++)
    {
        ele1[i] = 1;
       for(int j=0; j<i ;j++)
       {
         ele1[i] = ele1[i] * (x - arrx[j]);
       }
    }
    float ans = 0;
    for(int i=0; i<n ;i++)
    {
          ele[i] = 1;
          if(i == 0)
          {
              ele[i] = (ele1[i] * arry[0]);
          }
          else
          {
              ele[i] = (ele1[i] * arr[i-1][0]);
          }
        ans = ans + ele[i];
    }
   printf("\nThe value of f(%f) = %f",x,ans);
}
