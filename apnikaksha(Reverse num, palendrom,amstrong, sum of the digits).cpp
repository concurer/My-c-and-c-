#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,d,e,sum=0,n2,n3,rev=0;
    cin>>n;
    n2=n3=n;
    while(n!=0)
    {
     d=n%10;
     n=n/10;
     sum=sum+d;
    }
    if(n2==sum)
        cout<<"The number is a ARMSTRONG "<<endl;
    while(n3!=0)
    {
     e=n3%10;
     n3=n3/10;
     rev=rev*10+e;
    }
    if(n2==rev)
        cout<<"The number is a PALENDROM"<<endl;
    cout<<"Reverse of the digits : "<<rev<<endl;
    cout<<"Sum of the Digits : "<<sum<<endl;
    return 0;

}
