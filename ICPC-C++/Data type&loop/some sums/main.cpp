#include <iostream>

using namespace std;

int main()
{
    int n,a,b,s=0,v=0;
    cin>>n>>a>>b;

    for(int i=a; i<=b; i++)
    {
        s+=i;
    }

  for(int j=10 ; j<=n ;j++)
  {
      int o=(j/10)+(j%10);
     while( j>=a && j<=b ){
         v+=j;
     }
  }
  cout<<v;
    return 0;
}
