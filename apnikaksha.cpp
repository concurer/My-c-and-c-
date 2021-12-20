#include<iostream>
using namespace std;
int main(){
  /*
     name : Aditya Ganesh Battin
    first year
    Apni kaksha (Break and Continue)
    [Q] To find the Prime Numbers between the two numbers.
  */
  int a, b,i,j;
  cin>>a>>b;
  printf("\n");
  cout<<"The prime numbers between them are :"<<endl;
  for( i=a ; i<=b ;i++)
  {
      for(j=2;j<i;j++)
      {
        if( i%j == 0){
            break;
        }
      }
      if(j==i)
        cout<<i<<endl;
  }

  return 0;
}
