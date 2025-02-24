#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string binairy(int &x)
{
    string s= "";
    while(x>0)
 {
     s+=((x%2)+'0');
       x/=2;
}
reverse(s.begin(),s.end());
return s;
}
bool plandrome(string s)
{
    int len =s.length();
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
           {
            return 0;
           }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
 if(n%2==0)
 {
     cout<<"NO";
     return 0;
 }
 else{

    string r=binairy(n);
    if(plandrome(r)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 }
    return 0;
}
