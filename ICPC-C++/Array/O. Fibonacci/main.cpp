#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin>>n;
  long long a[51];
  a[1]=0;
  a[2]=1;
  for(int i=3 ;i<=51 ; i++)
    a[i]=a[i-1]+a[i-2];
  cout<<a[n];
    return 0;
}
