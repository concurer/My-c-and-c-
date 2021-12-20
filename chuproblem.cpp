#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<endl;
        int a[n];
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        cout<<endl;

        sort(a,a+n);

        for(int i=0;i<n;i++)
        {
            if(a[i] < 0 && k!=0)
            {
                a[i] = a[i]- (2*a[i]);
                k--;
            }
        }

        //sum
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sum += a[i];
            }
        }

        cout<<"max sum "<<sum<<endl;

    }
}
