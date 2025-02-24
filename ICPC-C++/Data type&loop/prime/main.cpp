#include <iostream>

using namespace std;

int main()
{

 int r=0,x;
 cin>>x;
 int t=x;
 while(x!=0)
 {
     r=r*10+(x%10);
     x=x/10;
 }
 cout<<r<<endl;
 if(t==r)
    cout<<"yes";
 else
    cout<<"no";
}
