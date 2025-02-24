#include <iostream>
#include<algorithm>
using namespace std;
int a[500][500];
int n;
void swapm(int x,int y)
{
    for(int i=0;i<n;i++)
        swap(a[x][i],a[y][i]);


    for(int i=0;i<n;i++)
        swap(a[i][x],a[i][y]);
}
int main()
{
int x,y;
cin>>n>>x>>y;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
swapm(x,y);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
      {
    cout<<a[i][j]<<" ";
      }
      cout<<endl;
}

    return 0;
}
