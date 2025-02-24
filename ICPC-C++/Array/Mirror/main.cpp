#include <iostream>

using namespace std;

int main()

{
    long long n,m;
    cin>>n>>m;
    long long a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           cin>>a[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0,k=m-1;j<m/2;j++,k--)
        {
        long long t=a[i][k];
        a[i][k]=a[i][j];
        a[i][j]=t;
        }
    }
 for(int i=0;i<n;i++)
 {
        for(int j=0;j<m;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
}

    return 0;
}
