/*
  name: Aditya Ganesh Battin
  FIRST YEAR prime number
*/
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 //Prime number can be said that a num is not divisible by any number which is greater than 2 and less than its square root
 int n;
 cin>>n;
 bool fin=0;
 for(int i; i<sqrt(n); i++)
 {
     if(n%i==0)
     {
        fin=1;
        break;
     }
 }
 if(fin==1)
    cout<<"not a prime"<<endl;
 else
    cout<<"prime"<<endl;
 return 0;
}
