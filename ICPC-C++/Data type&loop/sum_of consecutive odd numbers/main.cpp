#include <iostream>

using namespace std;

int main()
{
    int t,x,y,max,min;
    cin>>t;



   for(int j=1 ;j<=t ; j++)
   {
       int s=0;
       cin>>x>>y;
       if(x>y)
       {
           max=x;
           min=y;
       }
       else
       {
            max=y;
           min=x;
       }

        for(int i=min+1; i<max ; i++)
    {

        if(i%2!=0)

            s+=i;
    }
   cout<<s<<endl;
   }
    return 0;
}



