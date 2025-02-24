#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
     if(a[i]%2!=0)
       {
           cout<<0;
           return 0;

       }
  }
  int mini=INT_MAX;
    for(int i=0;i<n;i++)
  {
      int c=0;
      while(a[i]%2==0)
      {
          a[i]/=2;
      c++;
      }
       mini=min(mini,c);

  }
  cout<<mini;
    return 0;
}
