#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "\n";
    int a[n];
    for(int i = 0; i < n; i++)//taking array imput
        cin >> a[i];


    int counter = 1;//counting number of iterations

    while(counter < n)//the num of iterations needed is n-1 form 1
    {
        for(int i = 0;i < (n - counter); i++)
        {
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        counter++;
    }

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
