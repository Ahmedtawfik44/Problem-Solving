#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f[125]={};
    for(int i=0;i<s.length();i++)
    {
        f[s[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
        if(f[i]!=0)
            cout<<(char)i<<" : "<<f[i]<<endl;
    }

    return 0;
}
