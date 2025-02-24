#include <iostream>
#include<iomanip>
using namespace std;
double avr(double  a[],int  n)
{
    double s=0;
    for(int i=0 ;i<n ;i++)
    {
        s+=a[i];
    }
    return s;
}
int main()
{
  int n;
    cin>>n;
   double a[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    cout<<setprecision(8)<<fixed<< avr(a,n)/n;

    return 0;
}
