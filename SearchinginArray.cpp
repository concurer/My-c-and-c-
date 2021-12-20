#include<iostream>
using namespace std;

/*
//orignal work but in efficent.....
int binarySearch(int arr[],int n,int d)
{
  int s=0;
  int e=n-1;
  int mid=(s+e)/2;
  int g=0,h=mid;
  for(int j=0;j < h;j++)
  {
      if(d==arr[s])
      {
        return s;
        g=1;
      }
      else if(d==arr[e])
      {
          return e;
          g=1;
      }
      else if(d==arr[mid])
      {
          return mid;
          g=1;
      }
      else if(d < arr[mid])
      {
          mid=mid-1;
      }
      else if(d > arr[mid])
      {
          mid=mid+1;
      }
  }

  if(g=0){
    return -1;
  }

}
*/

int binarySearch(int arr[],int n,int d)
{
 //didi's work
 int s=0, e=n;
 int g=0;
 while(s<=e)
 {
     int mid=(s+e)/2;
     if(d==arr[mid])
     {
         return mid;
         g=1;
     }
     else if( d < arr[mid] )
     {
         e=mid-1;
     }
     else if( d > arr[mid] )
     {
         s=mid+1;
     }
     if(g==0){return -1;}
 }

}
int main()
{
  int n;
  cin>>n;
  cout<<"\n";

  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      cout<<" ";
  }
  int x;
  int b;
  cout<<"The Number you wanna Find : ";
  cin>>x;
  b = binarySearch(a,n,x);
  cout<<b;
}
