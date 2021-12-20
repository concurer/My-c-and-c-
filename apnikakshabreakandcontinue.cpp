#include <iostream>
using namespace std;
int main()
{
/*name : Aditya Ganesh Battin.
  first year
  Apni Kaksha Cpp plasment course(Break and continue)
  Q] wright a cpp prograram to tell if the given number is prime or not
*/
    int n,i;
    cin>>n;
    for( i=2; i < n ;i++)
    {
      if(n%i==0)
      {
       cout<<"Number is not Prime"<<endl;
       break;
      }
    }
    if(i==n){
        cout<<"Prime number"<<endl;
    }
    return 0;
}
