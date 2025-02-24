#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0 ;i<=n-1 ; i++)
    {
        cin>>a[i];
    }
   for(int i=0 ; i<n ; i++)
   {

        if(a[i]>0)
            cout<<"1";
        else if(a[i]<0)
            cout<<"2";
        else
            cout<<"0";
   }
    return 0;
}
