#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int min;
    cin>>a>>b;
    int lena=a.length();
    int lenb=b.length();
    if(lena>lenb)
        min=lenb;
    else
        min=lena;
    bool ch=0;
    for(int i=0 ;i<min ;i++)
    {
        if(a[i]<b[i])
        {
            cout<<a;
            ch=1;
            break;
        }
        if(b[i]<a[i])
        {
            cout<<b;
            ch=1;
            break;
        }
    }
    if(ch==0)
    {
        if(lena>lenb)
            cout<<b;
        else
            cout<<a;

    }

    return 0;
}
