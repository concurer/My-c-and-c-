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

void display(){

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
      cout<<fixed<<setprecision(6)<<" "<<arr[i][j];
    }
    cout<<endl;
  }
}

int main(){

 takeInputs();
//first roww....(r1 -> r1/k)
 float k = arr[0][0];
 arr[0][0] = 1;
 arr[0][1] = arr[0][1] / k;
 arr[0][2] = arr[0][2] / k;
 arr[0][3] = arr[0][3] / k;

 //second row...(r2 -> r2 - r1)
 float j = arr[1][0];
 arr[1][0] = 0;
 arr[1][1] = arr[1][1] - (j*arr[0][1]);
 arr[1][2] = arr[1][2] - (j*arr[0][2]);
 arr[1][3] = arr[1][3] - (j*arr[0][3]);

 //thied row...(r3 -> r3 - r1)
 float l = arr[2][0];
 arr[2][0] = 0;
 arr[2][1] = arr[2][1] - (l*arr[0][1]);
 arr[2][2] = arr[2][2] - (l*arr[0][2]);
 arr[2][3] = arr[2][3] - (l*arr[0][3]);

 //r2 -> r2/arr[1][1]
 float q = arr[1][1];

 arr[1][1] = 1;
 arr[1][2] = arr[1][2] / q;
 arr[1][3] = arr[1][3] / q;

 //r3 -> r3 - r2
 float w = arr[2][1];
 arr[2][1] = 0;
 arr[2][2] = arr[2][2] - (w*arr[1][2]);
 arr[2][3] = arr[2][3] - (w*arr[1][3]);

 //r3 -> r3/arr[][]
float e = arr[2][2];
arr[2][2] = 1;
arr[2][3] = arr[2][3] / e;

//r2 - > r3 - r2
//r1 -> r1 - r3
float r = arr[0][2];//r1
float t = arr[1][2];//r2

arr[0][3] = arr[0][3] - r*arr[2][3];
arr[1][3] = arr[1][3] - t*arr[2][3];
arr[1][2] = 0;
arr[0][2] = 0;

//r1 -> r1 - r2
float y = arr[0][1];
arr[0][3] = arr[0][3] - y*arr[1][3];
arr[0][1] = 0;

cout<<"SOLVED AUGMENTED MATRIX"<<endl;
display();
cout<<endl;

//displaying the answers:--
cout<<"x"<<" = "<<arr[0][3]<<endl;
cout<<"y"<<" = "<<arr[1][3]<<endl;
cout<<"z"<<" = "<<arr[2][3]<<endl;
}
