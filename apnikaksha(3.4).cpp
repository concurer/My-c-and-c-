#include<iostream>
#include<cmath>
using namespace std;
/* c program to find nCr
   nCr=  n!/((n-r)!*r!)
*/
int fact(int x)
{
    int fac=1;
    for(int i=1;i<=x;i++)
    {
        fac*=i;
    }
    return fac;
}

int c(int x,int y)
{
    int x,y,n1,k1,r1,d,e;
    int k = x - y;
    n1 = fact(x);
    r1 = fact(y);
    k1 = fact(k);
    d = k1 * r1 ;
    e = n1 / d;
    return e;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<c(n,r);
    return 0;
}
