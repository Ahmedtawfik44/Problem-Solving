#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--){
    int st=-1,l=-1,c=0;
    string s;
    cin>>s;
    int len=s.length();

   for(int i=0;i<len;i++){
    if(s[i]=='1'){
        st=i;
        break;
    }
   }

   for(int i=len-1;i>=0;i--){
    if(s[i]=='1'){
        l=i;
        break;
    }
   }

    for(int i=st ;i<=l;i++){
        if(s[i]=='0')
         c++;

    }

    if(st==-1 || l==-1){
        cout<<0<<endl;
    }

    else
    cout<<c<<endl;
  }
    return 0;
}
