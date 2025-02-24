#include <iostream>
using namespace std;
int main()
{
 long long n,m;
 cin>>n>>m;
 long long a[n][m];
 for(int i=0 ; i<n ; i++)
    for(int j=0 ; j<m ; j++)
        cin>>a[i][j];
    long long x;
    cin>>x;
    bool c=false;
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
             {
                 if(a[i][j]==x)
                 {
                     c=true;
                     break;
                 }
             }
    if(c==true)
        cout<<"will not take number";
    else if(c==false)
        cout<<"will take number";

    return 0;
}
