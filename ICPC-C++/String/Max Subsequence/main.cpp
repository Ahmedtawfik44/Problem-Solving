#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   char s[n];
    cin>>s;
    int c=0;
    for(int i=0 ; i<n ;i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }
    cout<<c;
    return 0;
}
