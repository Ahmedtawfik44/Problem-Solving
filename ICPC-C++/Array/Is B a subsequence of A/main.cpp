#include <iostream>

using namespace std;

int main()
{
    long long n,m,c=0;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(b[j]==a[i])
        {
           c++;
           break;
        }

    }
    if(c==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
