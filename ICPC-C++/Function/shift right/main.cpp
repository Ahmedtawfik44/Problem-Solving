#include <iostream>
using namespace std;
void shift(int a[],int s,int n)
{
for(int i=n-s;i<n;i++)
    cout<<a[i]<<" ";
for(int i=0;i<n-s;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n,s;
cin>>n>>s;
s%=n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
shift(a,s,n);
    return 0;
}
