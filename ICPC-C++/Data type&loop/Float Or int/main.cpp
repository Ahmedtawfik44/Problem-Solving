#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    int y=n;
   double r=n-y;
    if(r!=0)
        cout<<"float "<<y<<" "<<r;
    else
        cout<<"int "<<n;
    return 0;
}
