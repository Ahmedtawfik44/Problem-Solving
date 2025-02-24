#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   string s1="hellow";
   int z=0,i=0;
   while(true)
   {
       if(i==s.length()|| z==5)
          break;
       if(s[i]==s1[z])
         z++;
         i++;
   }
   if(z==5)
    cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
