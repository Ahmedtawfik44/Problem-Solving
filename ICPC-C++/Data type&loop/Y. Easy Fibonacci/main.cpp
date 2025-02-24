#include <iostream>

using namespace std;

int main()
{
   long long  n;
   cin>>n;
   if(n==1)
    cout<<0;
   else if(n==2)
    cout<<0<<" "<<1;
   long long  a=0,b=1;
   cout<<a<<" "<<b<<" ";

  for (int i = 3; i <= n; i++) {
long long c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;


   }
    return 0;
}
