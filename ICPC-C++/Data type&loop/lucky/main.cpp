#include<iostream>

using namespace std;
int main()
{
int a,b,m=0;
cin>>a>>b;
for(int i=a ; i<=b ;i++)
{
    int n=i;
    bool c=0;
    while(n!=0)
    {
        int d=n%10;
        n/=10;
        if(d!=4 && d!=7)
            c=1;
    }

if(c==0){
        cout<<i<<" ";
        m++;
}

}
if(m==0)
    cout<<-1;
return 0;

}
