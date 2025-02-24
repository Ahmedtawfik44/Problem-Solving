#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
             cin>>a[i][j];

   long long x,y;
   cin>>x>>y;
 if(a[x-1][y-1]!='.'&&a[x-1][y]!='.'&&a[x-1][y+1]!='.'&&a[x][y-1]!='.'&&a[x][y+1]!='.'&&a[x+1][y-1]!='.'&&a[x+1][y]!='.'&&a[x+1][y+1]!='.')
      cout<<"yes"<<endl;
 else
  cout<<"no";
    return 0;
}
