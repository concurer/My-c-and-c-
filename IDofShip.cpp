#include <iostream>
#include <bits/stdc++.h>
#define ll long long
// always #define <define as>  <what you wanna define>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// faster inputs and outputs..............
	ll int t;
	cin>>t;

	while(t--)
	{
	    char ship;
	    cin>>ship;

	    if(ship == 'B' || ship == 'b')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(ship == 'C' || ship == 'c')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else if(ship == 'D' || ship == 'd')
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    else
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
