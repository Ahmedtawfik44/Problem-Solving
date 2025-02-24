#include <iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
   if(n==1)
   {
        cout << "NO\n" ;
        continue;
   }
   if(prime(n))
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}
