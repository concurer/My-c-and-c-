/*
   Subarray : the continues part of an array.
   eg. arr[5]={1,2,3,4,5}
   subarrays are
   -1
   -1,2
   -1,2,3
   -1,2,3,4
   -1,2,3,4,5
   -2
   -2,3
   -2,3,4
   -2,3,4,5
   -3
   -3,4
   -3,4,5
   -4
   -4,5
   -5
   the number of possible subarrays of array of n elements = (n*(n+1))/2 = nC2+2.
*/
// to print the sum of every possible subarray of inputed array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"\n";
    int a[n];
    for(int i=0;i<n;i++)//taking array imput
        cin>>a[i];

    for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
            {
                int sum=0;
                int z;
                for(z=i;z<=j;z++)
                {
                    sum=sum+a[z];
                }
                cout<<sum<<" ";
                sum=0;
            }
}
