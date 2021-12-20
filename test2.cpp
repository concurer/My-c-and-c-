#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	cout<<endl;

	int n[t];
	for(int i=0; i<t ;i++)
    {
         cin>>n[i];
    }
    cout<<endl;
    int j=0;

    while(j<t)
    {
        int a = 0;
        for(int i=2; i  < n[j] ;i++)
        {
            if(n[j]%i == 0)
            {
              a=1;
              break;
            }
        }
        if(a==0)
        {
            cout<<"yes"<<endl;

        }
        else
        {
            cout<<"no"<<endl;

        }
        j++;
    }
	return 0;
}
