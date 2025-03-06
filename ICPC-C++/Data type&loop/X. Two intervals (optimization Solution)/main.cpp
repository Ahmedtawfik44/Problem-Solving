#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>=c && a<=d){
        if(b>=d) cout<<a<<" "<<d;
        else if(d>=b) cout<<a<<" "<<b;
    }

    else if(c>=a && c<=b){
        if(b<=d) cout<<c<<" "<<b;
        else if(b>=d) cout<<c<<" "<<d;
    }

    else
        cout<<-1;

    return 0;
}
