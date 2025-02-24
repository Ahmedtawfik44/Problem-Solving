#include <iostream>
using namespace std;
int sum_two_num(int n1,int n2)
{
    int s=0;
    for(int i=n1 ;i<n2 ; i++)
    {
        s+=i;
    }

      cout<<"the sum between two num = "<<s<<endl;
}

int c_prime(int n1,int n2)
{
int c=0;
for(int i=n1 ; i<=n2 ;i++)
   {
     for(int j =2 ;j<=i-1 ;j++)
      {
           if(i%j==0)
             return false;
             else
             {
                 c++;

             }


      }
   }
   return c;
}
int main()
{
    int a,b;
    cout<<"Enter num1 = ";
    cin>>a;
    cout<<"Enter num2 = ";
    cin>>b;
     sum_two_num(a,b);
    cout<< c_prime(a,b);
    return 0;
}
