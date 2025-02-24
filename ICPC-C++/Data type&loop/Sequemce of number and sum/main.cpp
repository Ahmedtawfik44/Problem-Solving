#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
  int  m,n,max,min,s=0;
  cin>>m>>n;
  if(n<=0 || m<=0)
    return 0;
  if(n>m)
  {
    min=m;
    max=n;
  }

   else
  {
       min=n;
    max=m;
  }
  for(int i=min ;i<=max ;i++)
  {
      cout<<i<<" ";
      s+=i;
  }
  cout<<"sum ="<<s<<endl;
    }
    return 0;

}
