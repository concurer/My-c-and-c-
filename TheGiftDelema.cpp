#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>V(n); for (int&a:V) cin>>a;
    vector<int>A(n);

    for(int&b:A)
    {
      auto it = find(V.begin(),V.end(),b+1);
      int x = it - V.begin();
      A[b] = x+1;
    }

    for(int&c:A)
        cout<<A[c]<<" ";
    cout<<endl;
    return 0;
}
