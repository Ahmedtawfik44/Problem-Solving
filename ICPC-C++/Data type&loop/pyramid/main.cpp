#include <iostream>
using namespace std;
int main()
{
    int h;
    cin>>h;
cin.exceptions(cin.failbit);
try
{
    if(h<0)
        throw 2;
    cout<<"the time "<<h;
}
catch(...)
{
    cerr<<"wrong";
}
    return 0;
}
