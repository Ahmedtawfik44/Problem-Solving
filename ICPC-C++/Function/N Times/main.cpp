#include <iostream>
using namespace std;
void time(int a,char c)
{
    for(int i=1;i<=a ;i++)
    {
        cout<<c<<" ";
    }
}
int main()
{
    int a,t;
    char c;
    cin>>t;
    while(t--)
    {
    cin>>a>>c;
    time(a,c);
    cout<<endl;
    }
    return 0;
}
