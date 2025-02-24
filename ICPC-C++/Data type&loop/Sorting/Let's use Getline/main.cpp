#include <iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  int  length=s.length();
  for(int i=0 ; i<length ;i++)
  {
      if(s[i]=='\\')
        break;
cout<<s[i];
  }

    return 0;
}
