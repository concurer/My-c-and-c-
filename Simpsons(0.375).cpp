#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float func(float x){
  float y = 1/x;
  return y;
}

int main()
{
while(true)
{
    cout<<endl;
    int op = 0;
    cout<<"Enter the way you wanna calculate the ans : "<<endl;
    cout<<" Using the function 1 "<<endl;
    cout<<" Using the inputs of the function 2"<<endl;
    cin>>op;


    if(op == 1)
    {
       float xo , xn, n;
       cout<<" Give the lower limit , upper limit and the number of intervals : ";
       cin>>xo>>xn>>n;
       cout<<endl;
       cout<<"Lower = "<<xo<<" Upper = "<<xn<<" intervals in float = "<<n<<endl;
       int nx = (int)n;
       cout<<"number of intervals = "<<nx<<endl;
       float h = xn - xo;
       h = h / n;
       cout<<h<<endl;

       float arrx[nx+1], arry[nx+1];
       arrx[0] = xo;
       arrx[nx] = xn;
       for(int i = 1 ; i < nx ; i++)
       {
           arrx[i] = xo + i*h;
       }
       for(int i=0; i<= nx ; i++)
       {
          cout<<arry[i]<<endl;
       }

       for(int i=0 ;i<=nx ;i++)
       {
          arry[i] = func(arrx[i]);
       }

       for(int i=0; i<= nx ; i++)
       {
          cout<<arry[i]<<endl;
       }

       float mulofthree = 0, other = 0;
       for(int i=1 ; i<n ; i++)
       {
          if(i%3 == 0)
          {
             mulofthree = mulofthree + arry[i];
          }
          else{
             other = other + arry[i];
          }
       }

        mulofthree = 2*mulofthree;
        other = 3*other;
        float s = arry[0]+mulofthree+other+arry[nx];
        float ans = ((3*h)/8)*(s);
         cout<<" ans is = "<<ans;
    }

    else
    {
      float xo , xn, n;
      cout<<" Give the lower limit , upper limit and the number of intervals : ";
      cin>>xo>>xn>>n;
      cout<<endl;
      cout<<"Lower = "<<xo<<" Upper = "<<xn<<" intervals in float = "<<n<<endl;
      int nx = (int)n;
      cout<<"number of intervals = "<<nx<<endl;
      float h = xn - xo;
      h = h / n;
      cout<<h<<endl;

      float arrx[nx+1], arry[nx+1];
      arrx[0] = xo;
      arrx[nx] = xn;
      for(int i = 1 ; i < nx ; i++)
      {
          arrx[i] = xo + i*h;
      }

      for(int i=0 ;i<=nx ;i++)
      {
          cout<<"input the f("<<i<<") value : ";
          cin>>arry[i];
          cout<<endl;
      }

      for(int i=0; i<= nx ; i++)
      {
          cout<<arry[i]<<endl;
      }

      float mulofthree = 0, other = 0;
      for(int i=1 ; i<n ; i++)
      {
         if(i%3 == 0)
         {
             mulofthree = mulofthree + arry[i];
         }
         else{
             other = other + arry[i];
         }
      }

      mulofthree = 2*mulofthree;
      other = 3*other;
      float s = arry[0]+mulofthree+other+arry[nx];
      float ans = ((3*h)/8)*(s);
      cout<<" ans is = "<<ans;
    }
}
}
