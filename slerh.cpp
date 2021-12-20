#include<iostream>
#include<string>
using namespace std;
int main()
{
    string q;
    getline(cin,q);
    int n = q.length();
    int a = n-2;
here:
    if(q[a]== 'A' || q[a]== 'a' || q[a]== 'E' || q[a]== 'e' || q[a]== 'I' || q[a]== 'i' || q[a]== 'o' ||q[a]== 'O' || q[a]== 'u' || q[a]== 'U' || q[a]== 'y' || q[a]== 'Y')
    {
        cout<<"YES"<<endl;
    }
    else if(q[a] == ' ')
    {
        a--;
        goto here;
    }
    else{
        cout<<"NO"<<endl;
    }
}
