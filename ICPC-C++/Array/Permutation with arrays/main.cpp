#include <iostream>

using namespace std;

int main()
{
    long long n,c=0;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
    {
        if(b[j]>b[j+1])
        {
            int t=b[j];
            b[j]=b[j+1];
            b[j+1]=t;
        }
    }
    bool ch=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
           {
               cout<<"no";
               return 0;
           }
    }
        cout<<"yes";

    return 0;
}
