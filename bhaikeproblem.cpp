#include<iostream>
using namespace std;

int product(int len, int arr[])
{
    int tmp = 1;
    for(int i = 0; i < len; ++i) {
        for(int j = i; j < len; ++j) {
            tmp *= arr[i]*arr[j];
        }
    }
    return tmp;
}

int main()
{
    int n, arr[n];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prod = product(n, arr);
    cout << prod;

    return 0;
}
