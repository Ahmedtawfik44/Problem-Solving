#include <iostream>
#include<bits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long a[n+1];
        for(int i=1 ;i<=n ;i++)
        {
            cin>>a[i];
        }
        long long mini=INT_MAX;
        for(int i=1 ;i<=n ; i++)
        {
            for(int j=i+1 ;j<=n; j++)
            {
                mini=min(mini,(a[i]+a[j]+j-i));
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}
