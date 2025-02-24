#include <iostream>
using namespace std;
int main()
{

    long long n,q;
    cin>>n>>q;
    long long prefix[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>prefix[i];
        prefix[i]+=prefix[i-1];
    }
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<(prefix[r]-prefix[l-1])<<endl;
    }


    return 0;
}
