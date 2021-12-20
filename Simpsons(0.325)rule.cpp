#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float func(float x){
  float y = (x);
  return y;
}

int main()
{
    float xo , xn, n;
    int nx = (int)n;
    cout<<" Give the lower limit , upper limit and the number of intervals : ";
    cin>>xo>>xn>>n;
    cout<<endl;

    float h = xn - xo;
    h = h / n;
    cout<<h<<endl;

}
