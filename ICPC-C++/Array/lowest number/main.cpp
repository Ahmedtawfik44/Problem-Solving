#include <iostream>

using namespace std;

int main()
{
long long n;
cin>>n;
long long a[n];
long long min=a[1];
long long minindex=1;
for(int i=1 ; i<=n ;i++)
{
    cin>>a[i];
}
for(int i=1 ;i<=n ;i++)
{
    if(a[i]<min)
    {
         min=a[i];
         minindex=i;
    }


}

cout<<min<<" "<<minindex;

    return 0;
}
