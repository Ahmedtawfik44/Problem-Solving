#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     for(int i=0;i<n;i++)
     {
        long long maxi=a[i];
        for(int j=i+1;j<n;j++)
     {
         maxi=max(maxi,a[j]);
         cout<<maxi<<" ";

     }
     }

cout<<endl;
}
    return 0;
}
