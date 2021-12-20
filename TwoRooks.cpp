#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool attack()
{
    int i1,j1,i2,j2;
    cin>>i1>>j1>>i2>>j2;
    if(i1 == i2 || j1 == j2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       if(attack() == true)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}
