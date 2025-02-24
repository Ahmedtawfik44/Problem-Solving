#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   string a,b;
   cin>>a>>b;
    int lena=a.length();
    int lenb=b.length();
    string c=a+b;
    cout<<lena<<" "<<lenb<<endl<<c<<endl;
    a[0]=a[0]^b[0];
    b[0]=a[0]^b[0];
    a[0]=a[0]^b[0];
    cout<<a<<" "<<b;

//4 2
//abcdef
//ebcd af


    return 0;
}
