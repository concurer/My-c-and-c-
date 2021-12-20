/*
     name : Aditya Ganesh Battin
    first year
    Apni kaksha (Pattern printing 3):
*/
#include<iostream>
using namespace std;
int main()
{
    //iverted pyramid in numbers
    /*
    1
    22
    333
    4444
    55555
    */
   /*
    int n;
    cin>>n;
    for(int i=1; i<=n ;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
    */
    //floyd's triangle.
    /*
    1
    23
    456
    78910
    1112131415
    */
    int n,counting=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
         cout<<counting;
         counting+=1;
        }
        cout<<endl;
    }
}
