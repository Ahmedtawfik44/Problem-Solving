#include <iostream>
#include<cmath>
using namespace std;
long long Equation(int a,int b)
{
    long long s=0;
    for(int i=2;i<=b;i+=2)
    {
        s=s+pow(a,i);
    }
    return s;

}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<Equation(a,b);
    return 0;
}
