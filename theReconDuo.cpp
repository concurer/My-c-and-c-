#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    int close = abs(v[0] - v[n-1]);
    if(close == 0)
    {
        cout<<n<<" "<<1;
    }
    else
    {
        vector<int>d;
        for(int i=0;i<(n-1);i++)
        {
            int u = abs(v[i]-v[i+1]);
            d.push_back(u);
        }
        int minElementIndex = std::min_element(d.begin(),d.end()) - d.begin();
        int minElement = *std::min_element(d.begin(), d.end());
        if(minElement<close)
        {
            cout<<minElementIndex+1<<" "<<minElementIndex+2<<endl;
        }
        else
        {
            cout<<n<<" "<<1;
        }
    }
    return 0;
}
