#include <iostream>
using namespace std;
int main()
{
    string  s;
    cin>>s;
    int len=s.length();
for(int i=0 ;i<len ;i++)
{
    if(s[i]==',')
        s[i]=' ';
    if(s[i]>=97 && s[i]<=122)
   {
       s[i]-=32;
   }
   else if(s[i]>=65 && s[i]<=90)
   {
       s[i]+=32;
   }
}

   cout<<s;
}
