#include <iostream>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0 ;i<n ; i++)
  {
      cin>>a[i];
  }

  for(int i=0 ;i<n ;i++)
  {
      for(int j=0 ;j<n-1 ;j++)
      {
        if(a[j]>a[j+1]) //<ÊäÇÒáí
         {
             long long t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
         }
      }
  }
  for(int i=0 ;i<n ;i++)
    cout<<a[i]<<" ";
    return 0;
}
