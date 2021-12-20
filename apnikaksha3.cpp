/*
  name : Aditya Ganesh Battin
  FIRST YEAR
  apnacollage(functions in cpp)
*/
#include<iostream>
#include<cmath>
using namespace std;
/*
 SYNTAX
 returntype functionname(int p1,int p2,.....)
 {
 //function body
 }
 Q.to code a function that will calculate th factorial of a given number
*/
int factorial(int a)
{
 int prod=1;
 for(int i=1; i<=a ;i++)
 {
  prod*=i;
 }
 return prod;
}
int main()
{
 int n,fact;
 cin>>n;
 fact=factorial(n);
 cout<<fact;
}
