#include<iostream>
#include<bits//stdc++.h>

using namespace std;

float func(float x)
{
    float q=x,f;
    f =  (q*q*q*q*q)+(q*q*q)+90*q-1000;
    return f;
}

float dfunc(float x)
{
    float q=x,df;
    df = 5*(q*q*q*q)+3*(q*q)+90;
    return df;
}

float xpone(float xi)
{
    float a = func(xi);
    float b = dfunc(xi);
    float x = a/b;
    float xpon = (xi - x);
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

void display(float arr1[6])
{
  for(int i = 0 ; i<6 ; i++)
  {
      cout<<arr1[i];
  }
}


int main()
{
    float x,xi,xp,n,t=1;
    /*
    float arr[21]={0,1,2,3,4,5,6,7,8,9,10};
    for(int i=0 ; i<21 ; i++)
    {

        if(func(i)<0 && func(i+1)>0)
        {
            xi = arr[i+1];
            break;
        }
    }
    */
    cout<<"Input xi : "<<endl;
    cin>>xi;
    xp = xpone(xi);
    float ea = 1000;
    cout<<"Enter up to which significant digits : ";
    cin>>n;
    cout<<endl;
    float es = calES(n);
    cout<<"the value of ES : "<<es<<endl;
    //displaying first ittration
    float arr2[5] = {xi,func(xi),dfunc(xi),xp,ea};

      for(int i = 0 ; i<5 ; i++)
      {
        cout<<fixed<<setprecision(6)<<arr2[i]<<" ";
      }
      cout<<endl;


    while(ea>es)
    {

      xi = xp;
      xp = xpone(xi);
      ea = calEA(xi , xp);

      float arr1[5] = {xi,func(xi),dfunc(xi),xp,ea};

      for(int i = 0 ; i<5 ; i++)
      {
        cout<<fixed<<setprecision(6)<<arr1[i]<<" ";
      }
      cout<<endl;
    }
    cout<<"our Approximate root is : "<<xp<<endl;
}
