#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
         string s,t,k="";
  cin>>s>>t;
  int lent=t.length();
  int lens=s.length();
  int n=(lens>lent)?lent:lens;
  for(int i=0 ;i<n;i++)
  {
    cout<<s[i]<<t[i];
  }
  if(lens>lent)
  {
      for(int i=n ;i<lens ;i++)
      {
          cout<<s[i];
      }
  }
  if(lens<lent)
  {
      for(int i=n ;i<lent ;i++)
      {
          cout<<t[i];
      }
  }
  cout<<endl;
    }

}
