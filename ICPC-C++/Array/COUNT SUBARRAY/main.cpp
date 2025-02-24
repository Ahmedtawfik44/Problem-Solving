#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,c=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
     for(int i=0;i<n;i++)
     {
         c++;
        for(int j=i+1;j<n;j++)
     {
         if(a[j]>=a[j-1])
         {
             c++;
         }
         else
            break;
     }
     }


      cout<<c<<endl;
   }
    return 0;
}
