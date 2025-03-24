#include <iostream>
using namespace std;
int main(){


     int c1=0,c2=0;
    bool ch=0;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='0'){
            c1++;
            if(c1>=7)
            {
                ch=1;
                break;
            }
            c2=0;
        }

        else if(s[i]=='1'){
            c2++;
            if(c2>=7)
            {
                ch=1;
                break;
            }
            c1=0;
        }
}

if(ch==1){
    cout<<"YES";
}
    else{
        cout<<"NO";
    }


    return 0;
}
