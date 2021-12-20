#include<iostream>
#include<bits//stdc++.h>

using namespace std;

float func(float x)
{
    float q=x,f;
    f =  (q*q)+(4*q)+4;
    return f;
}


float xpone(float xi,float xni)
{
    float a = func(xi);
    float b = func(xni);
    float xpon = xi - ((a*(xni - xi))/(b - a));
    return xpon;
}

float calES (int n)
{
    float o = 0.5 ;
    float a = 2-n;
    if(a<0)
    {
      while(a!=0)
        {
         o = o / 10;
         a++;
        }
    }
    else
    {
        while(a!=0)
        {
            o = o *10;
            a--;
        }
    }
    return o;
}

float calEA(float  xi1,float  xi2)
{
    float ans;
    ans = ((xi2 - xi1)/xi2);
    if(ans<0)
    {
        ans =  (ans*(-1));
    }
    ans = ans * 100;
    return ans;
}

/*void display(float arr1[6])
{
  for(int i = 0 ; i<6 ; i++)
  {
      cout<<arr1[i];
  }
}*/


int main()
{
    float x,xi,xp,xni,n;
    cout<<"Enter the values of xi-1 and xi : ";
    cin>>xni>>xi;
    cout<<endl;
    xp = xpone(xi,xni);
    float ea = 1000;
    cout<<"Enter up to which significant digits : ";
    cin>>n;
    cout<<endl;
    float es = calES(n);
    cout<<"the value of ES : "<<es<<endl;
    //displaying first ittration
    float arr2[6] = {xni,func(xni),xi,func(xi),xp,ea};

      for(int i = 0 ; i<6 ; i++)
      {
        cout<<fixed<<setprecision(6)<<arr2[i]<<" ";
      }
      cout<<endl;


    while(ea>es)
    {
      xni = xi;
      xi = xp;
      xp = xpone(xi,xni);
      ea = calEA(xi , xp);

      float arr1[6] = {xni,func(xni),xi,func(xi),xp,ea};

      for(int i = 0 ; i<6 ; i++)
      {
        cout<<fixed<<setprecision(6)<<arr1[i]<<" ";
      }
      cout<<endl;
    }
    cout<<"our Approximate root is : "<<xp<<endl;
}
