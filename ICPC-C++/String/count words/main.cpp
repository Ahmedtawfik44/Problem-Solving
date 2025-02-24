#include <iostream>

using namespace std;

int main()
{
    int c=0;
    string s;
    getline(cin,s);
    bool st=false,en=false;
for(int i=0;i<s.length();i++)
{
    if((s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') && st==false)
        st=true;

    if(!(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') && st==true)
        en=true;

    if((s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')&&(i==s.length()-1))
        en=true;

    if(st==en&&st=true )
    {
        c++;
        en=st=false;
    }
}
cout<<c<<endl;
    return 0;
}
