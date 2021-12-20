#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll q;
    cin>>q;
    ll j=1;
    while(j<=q){
        ll coun=0, b;
        cin>>b;
        ll k=0;
        while(k<n){
          if(arr[j] <= j)
          {
            coun++;
          }
           cout<<coun<<endl;
           k++;
        }
        j++;
    }
}
