#include<iostream>
#include<cmath>
using namespace std;
/* fibonacci series print the n terms of it */
/*
// this is my code working but big
void fib(int x)
{
    int a=0,b=1,c;
    if(x==1)
        cout<<0<<endl;
    else if(x==2)
        cout<<0<<" "<<1<<" "<<endl;
    else if(x>2)
    {
      cout<<0<<" "<<1<<" ";
      for(int i;i<=x;i++)
      {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
      }
    }
}
*/
void fib(int x)
{
 int t1=0;
 int t2=1;
 int next;

 for(int i=1 ; i<=x ;i++)
 {
     cout<<t1<<endl;
     next=t1+t2;
     t1=t2;
     t2=next;
 }
 return;
}
int main()
{
 int n;
 cin>>n;
 fib(n);
 return 0;
}
