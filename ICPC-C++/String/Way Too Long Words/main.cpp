#include <iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    string s;
    for(int i=0 ;i<x ;i++)
    {
        cin>>s;
        int len=s.length();
   if(len<=10)
        cout<<s<<endl;
  else
  {
      string v1,v2;
   v1=s[0];
   v2=s[len-1];
   cout<<v1<<len-2<<v2<<endl;
  }
    }




    return 0;
}
