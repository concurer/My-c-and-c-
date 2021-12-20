#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a=0,b=1,c;

    while(n>=3)
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }

    cout<<c<<endl;
}
