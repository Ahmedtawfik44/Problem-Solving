#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
for(int i=1;i<=n;i++)
{
 int s=0,st=0;
    int x;
    cin>>x;
 while(x!=0)
 {
     int b=x%2;
       x/=2;
    if(b==1)
    {
        s++;
    }
 }
for(int i=0;i<s;i++)
{
    st+=pow(2,i);
}
    cout<<st<<endl;
}
    return 0;
}
