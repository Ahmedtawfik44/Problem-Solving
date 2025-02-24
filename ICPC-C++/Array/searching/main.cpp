#include <iostream>

using namespace std;

int main()
{
   long long n,x,k;
   cin>>n;
   long long a[n];
   for(int i=0 ;i<=n-1 ; i++)
   {
       cin>>a[i];
   }
   cin>>x;
   bool found =false;
   for(int i=0 ;i<=n-1 ;i++)
   {
       if(a[i]==x)

       {
            k=i;
           found = true;
           break;
       }
   }
   if(found == true)
    cout<<k;
    else
        cout<<"-1";
}
