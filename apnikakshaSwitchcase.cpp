#include<iostream>
using namespace std;
int main()
{
  /*
     name : Aditya Ganesh Battin
    first year
    Apni kaksha (Switch case):
    its just like a assignment if else statments
    [Q] To built a program for a simple Calculater
  */
  int a, b;
  char button;
  cin>>a>>b>>button;
  switch(button)
  {
   case '+': cout<<a+b<<endl;
       break;
   case '-':cout<<a-b<<endl;
       break;
   case '*':cout<<a*b<<endl;
       break;
   case '/':cout<<a/b<<endl;
       break;
   case '%':cout<<a%b<<endl;
       break;
   default: cout<<"The Operation is not avilable Try again"<<endl;
       break;
  }

}
