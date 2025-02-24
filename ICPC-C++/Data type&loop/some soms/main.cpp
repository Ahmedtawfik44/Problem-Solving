#include <iostream>
using namespace std;
int main() {
    int n,a,b,st=0;
    cin>>n>>a>>b;
for(int i=1;i<=n;i++)
{
    int s=0;
   int k=i;
    while(k!=0)
    {
      s+=k%10;
      k/=10;
    }
if(s>=a&&s<=b)
{
    st+=i;
}
}
cout<<st<<endl;
    return 0;
}
