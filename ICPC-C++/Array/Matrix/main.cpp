#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,c=0,s=0;
    cin>>n;
    long long a[n][n];
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        cin>>a[i][j];

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(i==j)
            s+=a[i][j];
    }
for(int i=0,j=n-1;i<n;i++,j--)
{
    c+=a[i][j];
}
for(int i=0,j=n-1;i<n;i++,j--)
    s+=a[i][j];
long long z=s-c;
cout<<abs(z)<<endl;

    return 0;
}
