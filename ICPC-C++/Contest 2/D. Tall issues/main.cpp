#include <iostream>

using namespace std;

int main()
{
    int n,h,c=0;
    cin>>n>>h;
    int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++){
        if(a[i]>h)
          c+=2;
        else if(a[i]<=h)
            c++;
    }

    cout<<c;


    return 0;
}
