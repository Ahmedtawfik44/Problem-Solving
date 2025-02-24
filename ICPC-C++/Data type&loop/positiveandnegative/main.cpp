
#include<iostream>
using namespace std;
bool palindrom(int n)

{
    int r=0;
    while(n>=0)
    {

        r=r*10+n%10;

        n/10;

    }
    return r;
}
int main()
{
int x;
cin>>x;
bool r=palindrom(x);
if(r==true)
    cout<<"YES";
else
    cout<<"NO";




    return 0;
}
