#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool frimeet()
{
    int i,j;
    // i is shef and j is shefs friend
    cin>>i>>j;
    if(i == j)
    {
        return true;
    }
    else if ( i > j )
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      if(frimeet() == true)
      {
          cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
}

