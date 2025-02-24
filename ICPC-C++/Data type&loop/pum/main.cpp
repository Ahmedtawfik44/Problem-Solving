#include <iostream>

using namespace std;

int main()
{int n;
cin>>n;
int c=0;
int i=1;
 while (1)
{
    if(c==n)
    {
        break;
    }
        if( i%4==0)
        {
            cout<<"PUM"<<endl;
            i++;
            c++;
            continue;
        }
    cout<<i<<" ";
    i++;
}

    return 0;
}
