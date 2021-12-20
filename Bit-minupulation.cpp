#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos)
{
   return ( (n & (1<< pos) )!= 0);
}


int powerof2(int n)
{
 return & (n-1))
}

int main()
{
  int n;
  cin>>n;

  cout<<ispowerof2(n)<<endl;
}
