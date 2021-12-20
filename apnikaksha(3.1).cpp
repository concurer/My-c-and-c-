#include<iostream>
#include<cmath>
using namespace std;

int isprime(int x)
{
    bool p=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
         p=1;
         break;
        }
    }
    if(p==0)
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    cin>>a>>b;

    for(int j=a;j<=b;j++)
    {
        if(isprime(j)==true)
            cout<<j<<endl;
    }
    return 0;
}
