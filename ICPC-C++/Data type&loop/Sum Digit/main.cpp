#include <iostream>

using namespace std;

int main()
{
 long long n,s=0;
 cin>>n;
 string value;
 cin>>value;
 for(int i=0 ;i<n ;i++)
 {

     s+=value[i]-'0';

 }
 cout<<s;
    return 0;
}
