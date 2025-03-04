#include <iostream>
using namespace std;
int main() {
    int n, y,m,d,re;
    cin>>n; //400
    y=n/365;  //400/365=1
    re=y*365; //1*360=365
    re=n-re; //remaining=400-365=35
    m=re/30; //35/30=1
    d=re-(m*30); //35-30=5
    cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days";

    return 0;
}
