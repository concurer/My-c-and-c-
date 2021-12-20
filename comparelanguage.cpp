#include<iostream>
#include<cmath>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    string t;
    cin>>s>>t;
    reverse (s.begin(),s.end());
    int x = s.compare(t);
    if(x == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
