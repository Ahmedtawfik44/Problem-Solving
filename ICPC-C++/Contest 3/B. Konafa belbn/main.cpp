#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,x1,x2,x3;
        cin>>x1>>x2>>x3;
        a=(x1+x2+x3)-max({x1,x2,x3})-min({x1,x2,x3});
        int r=abs(a-x1)+abs(a-x2)+abs(a-x3);
        cout<<r<<endl;
    }
    return 0;
}
