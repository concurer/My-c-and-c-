#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Program for Trapezoidal Rule */

double func(double x)
{
    double y;
    y = (x*x*x*x);
    return y;
}


int main(){

double x, xn;
double n;

cout<<"Give the input Range x0 : ";
cin>>x;
cout<<endl;
cout<<"Give the input Range xn : ";
cin>>xn;
cout<<endl;
cout<<"Give number of intervals : ";
cin>>n;
cout<<endl;

double h = (xn - x);
h = h/n;

cout<<"value of h : "<<h;
double arrx[n+1],arry[n+1];

arrx[0] = x;
for(int i=1;i<6;i++)
{
    arry[i] = (x + (i*h));
}
arrx[6] = xn;

for(int i=0;i<=6;i++)
{
    cout<<arrx[i]<<endl;

}
cout<<endl;
for(int i=0;i<=6;i++)
{
    arry[i] = func(arrx[i]);
}

for(int i=0;i<=6;i++)
{
    cout<<arry[i]<<endl;

}
cout<<endl;
double midsum = 0;
for(int i=1;i<6;i++)
{
    midsum =+ arrx[i];
}

cout<<endl;
cout<<midsum<<endl;

float ans = (h/2)*(arry[0]+2*(midsum)+arry[6]);

cout<<"intigration of f(x) form "<<x<<" to "<<xn<<" is : "<<ans;
}
