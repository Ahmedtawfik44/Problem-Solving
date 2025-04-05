#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   cin.ignore();
   while(n--){
    string s,temp="";
    getline(cin,s);
    int ls=s.length();
    for(int i=0;i<ls;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') )
            temp+=tolower(s[i]);
    }

    int lt=temp.length();
    bool c=true;
    for(int i=0;i<(lt/2);i++){
        if(temp[i]!=temp[lt-i-1]){
            c=false;
            break;
        }
    }

    if(c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   }
   return 0;
}
