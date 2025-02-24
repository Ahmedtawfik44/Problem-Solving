#include <iostream>
using namespace std;
void Minmax(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    for(int i=0 ;i<n ;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0 ;i<n ;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    cout<<min<<" "<<max;
}
int main()
{
   int x;
    cin>>x;
    int y[x];
    for(int i=0;i<x;i++)
        cin>>y[i];
    Minmax(y,x);
    return 0;
}
