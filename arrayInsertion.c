//incert an elelment in an array at ith position
#include<stdio.h>
int main()
{
  int arr[100],pos,i,n,x;//extra

  printf("Enter the number of elements you wanna have in array : ");
  scanf("%d \n",&n);

  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  //incerting
  printf("Enter elements position you want to incert at : ");
  scanf("%d",&pos);

  for(i=n-1;i>=pos;i--)
  {
    arr[i+1]=arr[i];
  }

  printf("\n enter the value : ");
  scanf("%d",&x);

  arr[pos]=x;

  //printing the updated array

  for(i=0;i<n+1;i++)
  {
      printf("%d ",arr[i]);
  }

  return 0;

}

