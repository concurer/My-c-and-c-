#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    int  i = n;
    int it
    vector <int> v(n)::iterator it;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int j = 1;
    while(i>0)
    {

      it = std::find (v.begin(), v.end(), j);
      cout<<it - v.begin()<<" ";
      j++;
    }
}
