#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int colition(int arr[],int a,int i)
{
   float b = (float)a;
   b = b/2;
   if(b > arr[i])
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
        sum = sum + x;
    }
    int a = arr[0];

    int NumofParties = 0 ,arr2[n] ,j=1;
    arr2[0] = 1;
    for(int i=1; i<n;i++)
    {
        if(colition(arr,a,i) == 1)
        {
              NumofParties++;
              arr2[j]= i+1;
               j++;
        }
    }

    if(a > (sum/2))
    {
        cout<<1<<endl;
        cout<<1<<endl;
    }
    else if(NumofParties == 0)
    {
      cout<<0<<endl;
    }
    else
    {
      cout<<NumofParties+1<<endl;
      for(int i=0;i<j;i++)
      {
          cout<<arr2[i]<<" ";
      }
      cout<<endl;
    }
}
