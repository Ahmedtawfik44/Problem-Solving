#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int r,c=0;
        cin>>r;
    while(r>0){
        c+=r%10;
        r/=10;
    }

        cout<<c<<endl;
    }
    return 0;
}
