/*
  name: Aditya Ganesh Battin.
  First Year SGGS
  ApniKaksha-(Advanced Pattern)

  To print any pattern try to find the relations
  i.Row=In terms of n
  2 col= in terms of n and row
  3 Elements "what elements we need to print"
*/
#include<iostream>
using namespace std;
int main()
{
 //print the pattern
 /*
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
  row = n
  col = n+1-rownum
  elements = number of the colum
*/
 /*
 CODE...........
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=(n+1-i);j++)
     {
        cout<<j<<" ";
     }
     cout<<endl;
 }
 return 0;
*/
/*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1

 row = 1 to n
 col = rownum
 elements=" Alternate 0 1 so if it is a even row then start with 0 and if it is a odd row then start with 1  "
 */
/*int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
         if(i%2==0)//evenrows
         {
             for(int k=1; k<=i;k++)
             {
                 if(k%2!=0)//oddcol
                    cout<<"0"<<" ";
                 else//evencol
                    cout<<"1"<<" ";
             }
         }
         else//oddrows
         {
             for(int j=1;j<=i;j++)
             {
                 if(j%2==0)//evencol
                    cout<<"0"<<" ";
                 else//oddcol
                    cout<<"1"<<" ";
             }
         }
     cout<<endl;
 }
*/

//notice thatin the pattern the element position (rownum+colnum) is even then 1 if odd 0;

/*
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)//sum of the row num and the col num of the element is even
            cout<<"1"<<" ";
        else//sum of the row and col is odd
            cout<<"0"<<" ";
    }
    cout<<endl;
}
*/

 return 0;
}
