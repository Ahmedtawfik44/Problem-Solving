#include <iostream>
#include<cmath>
using namespace std;

int main()
{
long long n,s=0;
cin>>n;
long long a[n];
for(int i=0 ;i<=n-1 ;i++)
{
    cin>>a[i];
}

for(int i=0 ;i<=n-1 ;i++)
{
    s+=a[i];
}
  cout<<abs(s);
    return 0;
}
