#include <iostream>
using namespace std;

int main()
{
    int a,b,max,min,GCD;
    cin>>a>>b;
    if(a>b){
        min=b;
        max=a;
    }
    else{
         min=b;
        max=a;
    }
    for(int i=1;i<=max ;i++)
    {
        if(a%i==0 &&b%i==0)
           GCD=i;
    }
    cout<<GCD;
    return 0;
}
