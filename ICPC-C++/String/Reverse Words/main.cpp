#include <iostream>

using namespace std;

int main()
{
   string s;
  int f=0;
 while (cin>>s)
 {

 if (f){
cout<<" ";
   }
   f=1;
   for(int i=s.length()-1  ; i>=0 ; i--)
   {
       cout<<s[i];
   }

 }

    return 0;
}
