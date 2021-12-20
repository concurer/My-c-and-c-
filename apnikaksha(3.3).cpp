#include<iostream>
#include<cmath>
using namespace std;
int fact(int x)
{
    int pro=1;
    for(int i=1;i<=x;i++)
    {
        pro*=i;
    }
    return pro;
}

int main()
{
 int n;
 cin>>n;

 int ans = fact(n);
 cout<<ans;
 return 0;
}
