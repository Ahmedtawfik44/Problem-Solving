#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m,c=0;
    cin>>n>>m;
    long long a[n],b[m+1]={0};
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }

for(int i=0;i<n;i++)
{
    b[a[i]]++;
}

for(int i=1;i<=m;i++)
    cout<<b[i]<<endl;

    return 0;
}
