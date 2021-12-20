/*
     name : Aditya Ganesh Battin
    first year
    Apni kaksha (Pattern printing 3):
*/
#include<iostream>
using namespace std;
int main()
{
 /*
  Q. Butterfly Pattern
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *

    *      *
    **    **
    ***  ***
    ********

    n=4
    row 1 to n
    number of spaces in a row : (2*n-2*rownum)

    ********
    ***  ***
    **    **
    *      *
    n=4
    row n to 1
    number of spaces in a row : (2*n-2*rownum)

 */
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    int space=(2*n-2*i);
    for(int j=i;j<=space;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
