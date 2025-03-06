#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a*log(b) > d*log(c))
    cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
