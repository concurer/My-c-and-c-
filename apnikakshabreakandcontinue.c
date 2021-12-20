#include <iostream>
using namespace std;
int main()
{
/*name : Aditya Ganesh Battin.
  first year
  Apni Kaksha Cpp plasment course.
  Q] wright a cpp prograram to tell if the given number is prime or not
*/
    int n;
    cin>>n;
    for(int i=2; i < n ;i++)
    {

      if(n%i==0)
        continue;
      cout<<"Number is Prime"<<endl;
    }
    return 0;
}
