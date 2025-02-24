#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
int space =a-1;
int k=1;
for(int i=1;i<=a;i++)
{
    for(int z=space ;z>0 ;z--)
        cout<<" ";
    space--;
    for(int z=1 ;z<=k ;z++)
     cout<<"*";
     k+=2;
     cout<<endl;
}



return 0;
}
