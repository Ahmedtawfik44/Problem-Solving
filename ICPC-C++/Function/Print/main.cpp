#include <iostream>
using namespace std;
void print(int n)
{
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(f)
            cout<< " ";
        f=1;
        cout<<i;
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}
