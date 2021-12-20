/*
     name : Aditya Ganesh Battin
    first year
    Apni kaksha (Pattern printing 2):
*/
#include<iostream>
using namespace std;
int main()
{
 //inverted half pyramid
/*
   *****
   ****
   ***
   **
   *
*/
/*the Code.......
  int n;
  cin>>n;
  for(int i=n ; i>=1; i--)
  {
      for(int j=1 ; j<=i ; j++)
      {
          cout<<"*";
      }
      cout<<endl;
  }
  return 0;
*/

//inverted half pyramid after 180 degree rotation
/*
    *
   **
  ***
 ****
*****
*/
int n;
cin>>n;

for (int i=1 ; i<=n ; i++)
{
    for ( int j=1 ; j<=n ; j++)
    {
        if( n-i >= j )
            cout<<" ";
        else
            cout<<"*";
    }
    cout<<endl;
}

}
