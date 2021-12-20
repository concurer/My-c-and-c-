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
    for(int j=1;j<=2*n;j++)
    {
        if(i==1)
        {
            if(j==1||j==8)
                cout<<"*";
            else
                cout<<" ";
        }
        else if (i==2)
        {
            if(j==1||j==2||j==7||j==8)
                cout<<"*";
            else
                cout<<" ";
        }
        else if (i==3)
        {
            if(j==5||j==6)
                cout>>" ";
            else
                cout>>"*";
        }
        else
            cout>>"*";
    }
    cout>>endl;
  }
return 0;
}
