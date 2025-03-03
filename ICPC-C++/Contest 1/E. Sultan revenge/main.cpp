#include <iostream>

using namespace std;

int main()
{
   int a,b,pass;
   cin>>a>>b;
   pass=(a*a + b*b) % 100;
   cout<<pass;


    return 0;
}
