#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float arr[3][4];
//taking inputs:
void takeInputs()
{
  for(int i=0;i<3;i++)
  {
    char a;
    for(int j=0;j<4;j++)
    {
      if(j==0)
      {
          a = 'a';
      }
      else if(j==1)
      {
          a = 'b';
      }
      else if(j==2)
      {
          a = 'c';
      }
      else
      {
          a = 'd';
      }
      cout<<a<<i+1<<" : ";
      cin>>arr[i][j];
    }
    cout<<endl;
  }
}

float valX(float y,float z)
{
    float m;
    float a = arr[0][1] * y;
    float b = arr[0][2] * z;
    m = (arr[0][3] - (a) - (b));
    m = m /arr[0][0];
    return m;
}

float valY(float x,float z)
{
    float n;
    float a = arr[1][0] * x;
    float b = arr[1][2] * z;
    n = (arr[1][3] - (a) - (b));
    n = n /arr[1][1];
    return n;
}

float valZ(float x,float y)
{
    float o;
    float a = arr[2][0] * x;
    float b = arr[2][1] * y;
    o = (arr[2][3] - (a) - (b));
    o = (o/arr[2][2]);
    return o;
}

void display(float x,float y,float z)
{
   cout<<fixed<<setprecision(6)<<x<<" "<<y<<" "<<z<<endl;
}

int main()
{
 takeInputs();
 float x,x1,x2,y,y1,y2,z,z1,z2;
 cout<<"  x   "<<"   y  "<<"   z  "<<endl;
 //iteration one
 x = valX(0,0);
 y = valY(x,0);
 z = valZ(x,y);
 display(x,y,z);
 //storing
 x1 = x;
 y1 = y;
 z1 = z;

 //iteration two
 x = valX(y,z);
 y = valY(x,z);
 z = valZ(x,y);
 display(x,y,z);
 //updating
 x2 = x1;
 y2 = y1;
 z2 = z1;

 x1 = x;
 y1 = y;
 z1 = z;

//Iteration third
 x = valX(y,z);
 y = valY(x,z);
 z = valZ(x,y);
 display(x,y,z);
  while(x != x1 && x1 != x2  && y != y1  && z != z1 && y1 != y2 && z1 != z2)
  {
    //updating the oldervalues
    x2 = x1;
    y2 = y1;
    z2 = z1;
    x1 = x;
    y1 = y;
    z1 = z;

    //Iteration nth util the condition meets
    x = valX(y,z);
    y = valY(x,z);
    z = valZ(x,y);
    display(x,y,z);
  }

  cout<<"The values of variables are : ";
  cout<<fixed<<setprecision(4)<<" x = "<<x<<"\t y = "<<y<<"\t z = "<<z;
}
