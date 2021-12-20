//BISECTION METHORD>>>>>>>>>>>>>>>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* code for Bisection methord for X coube - 17 = 0 of you want it
for other functions update the func function given below in place of
f in terms of q but not use log or exponenial functions  */

float func(float x)
{
    float q=x;
    float f = q*q*q*q-3;//update your function here;
    return f;
}
float ten(float sig)
{
    if(sig>0)
    {
        int i = sig;
        float u=1;
        while(i--)
        {
            u = u * 10;
        }
        return u;
    }
    else if(sig<0)
    {
        int j = sig;
        float u=1;
        for(;j<0;j++)
        {
            u = u /10;
        }
        return u;
    }
    else
    {
        return 1;
    }
}



float valuXR(float xl ,float xu)
{
    float r;
    r = (xu + xl)/2;
    return r;
}

float valuEa(float xr1 , float xr2)
{
    float r;
    r = ((xr2-xr1)/xr2)*100;
    if ( r<0 )
        return -r;
    else
        return r;
}

void arra(float xl,float xu,float xr2,float ea)
{
    float read[7]={xl,func(xl),xu,func(xu),xr2,func(xr2),ea};
    for(int i=0; i<7 ; i++)
    {
        cout<<fixed<<setprecision(6)<<read[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    float x;
    float xl,xu,xr2,xr1,xrp;
    cout<<"Enter the ans till n significant values : ";
    float sig;
    cin>>sig;
    sig = 2 - sig;
    sig = ten(sig);
    float es = 0.5*sig,ea;
    cout<<"The Value of Es "<<es<<endl;
    //staters.......
    float arr[41]={-20,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    float a,a1,b1,b;
    for(int i=0;i<41;i++)
    {
        x = arr[i];
        a1 = func(x);
        a = x;

        x=arr[i+1];
        b1 = func(x);
        b = x;

        if(a1<0 && b1>0)
        {
            break;
        }
    }

    xl=a;
    xu=b;
    xr2 = valuXR(xu,xl);
    ea = 1000;//because the starting value of the Ea that is %efsylumm is not defined so i took any non related.......

    arra(xl,xu,xr2,ea);

    while(ea>es)
    {
        xr1 = xr2;

        if(func(xr2)<0)
        {
            if(func(xr2)>func(xl)) { xl = xr2; }
        }
        else if(func(xr2)>0)
        {
            if(func(xr2)<func(xu)) { xu = xr2; }
        }
        xr2 = valuXR(xl,xu);
        ea = valuEa(xr1,xr2);

        arra(xl,xu,xr2,ea);
    }

    cout<<endl;
    cout<<"our apprx root is : "<<xr2;

}

