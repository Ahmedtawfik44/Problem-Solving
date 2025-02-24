#include <iostream>

using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long a[n];
   for(int i=0 ; i<n ; i++)
   {
    cin>>a[i];
   }
   bool c=0;
 for(int i=0,j=n-1 ; i<n&&j>=0 ; i++,j--)
 {
     if(a[i]!=a[j])
     {
         c=1;
         break;
     }
 }
 if(c==0)
    cout<<"YES";
 else
    cout<<"NO";
    return 0;
}
