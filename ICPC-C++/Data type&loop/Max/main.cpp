#include <iostream>

using namespace std;

int main()
{
   int m=0,x,n;
   cin>>n;
   while(n--){
    cin>>x;
    if(x>m)
        m=x;
   }
   cout<<m;
    return 0;
}
