#include <iostream>

using namespace std;

int main()
{
 long long n,s=0;
 cin>>n;
 long long int a[n];
 for(int i=0 ; i<n ;i++)
 {
     cin>>a[i];
 }
 int min=a[0];
 for(int i=1;i<n;i++)
 {
     if(a[i]<min)
     {
         min=a[i];
     }

 }
 for(int i=0 ; i<n ;i++)
 {
     if(a[i]==min)
        s++;
 }
 if(s%2==0)
    cout<<"Unlucky";
 else
    cout<<"Lucky";

    return 0;
}
