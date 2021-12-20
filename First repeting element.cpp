#include<iostream>
using namespace std;
//my code only for positive numbers
int main()
{
    int n;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    int b[n+1];
    b[0] = 0;
    int c[(n/2)];
    int d=0;
    int g=1;
    int  k=0;
    for(int i=0;i<n;i++)
    {

        for(int j=1; j<(n+1) ;j++)
        {

            if(a[i] == b[j]){
                d = 1;
                c[k]= j;
                k++;
                break;
            }

        }
        if(d == 0)
        {
            b[g] = a[i];
            g++;
        }
        else
        {
            b[g] = -1;
            g++;
        }
        d = 0;
    }

    int mi = c[0];
    for(int i = 1;i<(n/2);i++)
    {
        if(mi > c[i])
        {
            mi  = c[i];
        }
    }
    cout<<"the first repeated number is in "<<mi<<"th  position."<<endl;
}
