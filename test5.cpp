#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    getline(cin,s);
    int coun = 0;
    int cut = 0;
    for(int i = 0;i<n;i++)
    {
      if(s.pop_back()=='x')
      {
          coun++;
      }

    }

}
