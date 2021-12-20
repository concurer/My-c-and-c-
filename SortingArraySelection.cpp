#include<iostream>
using namespace std;

void sortingArray(int a[],int n)
{
     for(int i=0 ; i<n-2 ;i++) //the loop that puts the flow at the first element of unsorted array
    {
        for(int j=i+1; j<n-1 ;j++) //the loop that check weather the first element of unsorted array is bigger than any of the integer until the lowest value is in first place
        {
            if(a[i]>a[j]) //swaping
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
}

int main()
{
    int n;
  cin>>n;
  cout<<"\n";

  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      cout<<" ";
  }

sortingArray(a,n);

    for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
}
