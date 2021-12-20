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

    int u;

    cout<<"\n";
    int m;
    for(u=0;u<n;u++)
        for(int i=0;i<=u;i++)
        {
          m=a[0];
          if(m<a[i])
          {
            m=a[i];
            cout<<"max till "<<u<<" : "<<m;
          }
        }
}
