#include<iostream>
#include<bits/stdc++.h>

using namespace std;

float func(float x){
  float y = (x*x*x*x);
  return y;
}

int main()
{
    float xo,xn,n;
    cout<<"give the lower limit : ";
    cin>>xo;
    cout<<endl;
    cout<<"give the upper limit : ";
    cin>>xn;
    cout<<endl;
    cout<<"give the number of intervels : ";
    cin>>n;
    cout<<endl;

    float h = xn - xo;
    h = h / n;
    cout<<"h = "<<h<<endl;
    int u = (float)n + 1;
    cout<<"u = "<<u<<endl;
    float arrx[u],arry[u];

    arrx[0] = xo;
    for(int i=1; i<6 ; i++)
    {
      arrx[i] = xo + (i*h);
    }
    arrx[6] = xn;

    for(int i=0; i<=6 ; i++)
    {
        arry[i] = func(arrx[i]);
    }

    float midsum = 0;
    for(int i=1;i<6;i++)
    {
      midsum =+ arry[i];
    }
    cout<<endl;
   float ans = (h/2)*(arry[0]+2*(midsum)+arry[6]);
cout<<"intigraction of f(x) form "<<xo<<" to "<<xn<<" is : "<<ans;
}

