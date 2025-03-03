#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
            int r;
    cin>>r;
    if(r>=1900)
        cout<<"Division 1"<<endl;

   else if(r>=1600)
        cout<<"Division 2"<<endl;
    else if(r>=1400)
        cout<<"Division 3"<<endl;
   else if(r<=1399)
        cout<<"Division 4"<<endl;
    }

    return 0;
}
