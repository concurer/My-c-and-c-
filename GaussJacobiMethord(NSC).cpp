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


int main(){

 takeInputs();


}
