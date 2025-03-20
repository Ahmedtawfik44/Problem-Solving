#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n][n],b[n][n];
    bool ch=1;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
        cin>>a[i][j];
        c+=a[i][j];
        }

    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
        cin>>b[i][j];

    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++){
        if(a[j][i]!=b[i][j]){
            ch=0;
            break;
        }
       }
   if(ch==1){
    cout<<"YES"<<endl<<c;
   }
   else{
    cout<<"NO";
   }

    return 0;
}
