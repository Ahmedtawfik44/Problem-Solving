#include <iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int len=s.length();
   bool ch=0;
   for(int i=0 ,j=len-1 ; j>=0 && i<len ;i++,j--)
   {
       if(s[i]!=s[j])
       {
           ch=1;
           break;
       }

   }
    if(ch==0)
          cout<<"YES";
       else if(ch==1)
        cout<<"NO";
    return 0;
}
