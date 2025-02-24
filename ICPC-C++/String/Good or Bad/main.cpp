#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
    string s;
    cin>>s;
    bool ch=0;
    int len=s.length();
    for(int i=0;i<len-2;i++)
    {
        if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
        {
          cout<<"Good"<<endl;
          ch=1;
          break;

        }

        else if(s[i]=='1'&&s[i+1]== '0'&& s[i+2]=='1')
           {
               cout<<"Good"<<endl;
               ch=1;
               break;

           }
    }

  if(ch==0)
    cout<<"Bad"<<endl;


    }

    return 0;
}
