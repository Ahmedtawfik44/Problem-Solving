#include <iostream>
using namespace std;
int Distinct(int a[],int n)
{
    int c=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-1;j++)
       {
           if (a[j]<a[j+1])
           {
               int t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
       }
   }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<Distinct(a,n);

    return 0;
}
