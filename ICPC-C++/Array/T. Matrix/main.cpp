#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n][n];
    for(int i=0 ;i<n ;i++)
        for(int j=0 ; j<n ;j++ )
           cin>>a[i][j];
    long long sd=0;
    for(int i=0 ;i<n ;i++)
        for(int j=0 ; j<n ;j++ )
           {
               if(i==j)
                sd+=a[i][j];
           }
           long long sdl=0;
    for(int i=0;i<n ;i++)
        for(int j=n-1 ; j>=0;j--)
             {
               if(i==j)
                sdl+=a[i][j];
           }
           cout<<abs(sd-sdl);
    return 0;
}
