#include <iostream>

using namespace std;

int main()
{
    long long n,l;
    cin>>n;

    for(int i=0 ; i<n ;i++)
    {
      cin>>l;
      if(l<=10)
      cout<<"A["<<i<<"] = "<<l<<endl;

    }

    return 0;
}
