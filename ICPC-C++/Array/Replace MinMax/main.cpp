#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    int minindex=0;
    int maxindex=0;
    long long  min=a[0];
    long long  max=a[0];
    for(int i=1 ;i<n ;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            minindex=i;

        }
        if(a[i]>max)
        {
            max=a[i];
            maxindex=i;
        }
    }

    long long t=a[maxindex];
    a[maxindex]=a[minindex];
    a[minindex]=t;
    for(int i=0 ; i<n ;i++)
    {
      cout<<a[i]<<" ";
    }

    return 0;
}
