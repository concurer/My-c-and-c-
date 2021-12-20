#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){
	int t;
	cin>>t;
	cout<<endl;

	while(t>0)
	{
	   int n,
	   sum = 0;
       vector<int> v;
       for(int i=0; i<n ; i++)
       {
           int a;
           cin>>a;
           v.push_back(a);
           sum = sum + a;
       }
       sum = sum / n;
       int count = 0;
       for(int j=0;j<n;j++)
       {
           if(sum < v[j] || sum == v[j]){
               count++;
           }
       }
       cout<<count<<endl;
       t = t - 1;
	}
}

