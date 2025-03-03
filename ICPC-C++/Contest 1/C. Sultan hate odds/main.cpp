#include <iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        int a,b,c,r;
        cin>>a>>b>>c;
        if(a==b)
            r=c;
        if(a==c)
            r=b;
        if(b==c)
            r=a;

            cout<<r<<endl;
     }

    return 0;
}
