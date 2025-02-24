#include <iostream>
using namespace std;
int Add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int r=Add(a,b);
    cout<<r;


    return 0;
}
