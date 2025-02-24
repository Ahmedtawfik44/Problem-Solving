#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long n,q;
cin>>n>>q;
long long a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
long long x;
for(int i=1;i<=q;i++)
{
    cin>>x;
    long long l=0,h=n-1;
    bool ch=0;
    while(l<=h)
{

   long long m=(l+h)/2;
    if(a[m]==x)
    {
        ch=1;
        break;
    }
    if(a[m]>x)
       h=m-1;
    else
        l=m+1;


}
if(ch==1)
    cout<<"found"<<endl;
else
    cout<<"not found"<<endl;

}

    return 0;
}

