#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int MisicalChairs()
{
  ll c = 1 , n;
  cin>>n;
  for(int i = 2; i < n; i++)
  {
      if(n % i == 1)
      {
          c++;
      }
  }
  return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      cout<<MisicalChairs()<<endl;
    }
}
