#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,d;
    cin>>s>>d;
    int counter = 0;

    for(int i=0;i<s.length();i++)
    {
        int x = s[i];
        int y = d[i];
        if(x<97)
        {
            x = x + 32;
        }
        if(y<97)
        {
            y = y + 32;
        }

        if(x < y)
        {
           cout<<-1<<endl;
           counter = 1;
           break;
        }
        else if(x > y)
        {
           cout<<1<<endl;
           counter = 1;
           break;
        }
    }
   if(counter == 0)
   {
       cout<<0<<endl;
   }
}
