/*
  name : Aditya Ganesh Battin
  FIRST YEAR
  apnacollage(functions  question in cpp)
*/
#include<iostream>
#include<cmath>
using namespace std;
int isprime(int x)
{
    bool u=0;
    for(int j=2;j<=x;j++)
    {
        if(x%j==0)
        {
          u=1;
          break;
        }
    }
    if(u==0)
      return 1;
    else
      return 0;

}
int main()
{
  int a,b;
  cin>>a>>b;
  for(int i=a;i<=b;i++)
  {
      if(isprime(i)==true)
        cout<<i;
  }
  return 0;
}

