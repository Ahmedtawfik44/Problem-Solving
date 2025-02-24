#include <iostream>
using namespace std;
int max(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int min(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
bool cprime(int n)
{
    if (n==1)
    {
        return false;
    }
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
                return false;
    }
return true;

}
int palindrome(int n)
{
int r=0;
int t=n;
while(t>0)
{
    r=r*10+t%10;
    t=t/10;
}
return r;
}
bool ispalindrome(int x)
{
    int r=palindrome(x);
    if(r==x)
        return true;
    else
        return false;
}
int divisor(int n)
{
    int cd=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cd++;
    }
    return cd;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,cp=0,v=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       if(cprime(a[i]))
        v++;
    }

     for(int i=0;i<n;i++)
    {

       if(ispalindrome(a[i]))
        cp++;
    }
   int maxd=a[0];
   int numd=divisor(a[0]);
   for(int i=0;i<n;i++)
   {
       if(divisor(a[i])>numd)
       {
            numd=divisor(a[i]);
         maxd=a[i];
       }
        else if(divisor(a[i])==numd)
        {
            if(a[i]>maxd)
                maxd=a[i];

        }
   }

   cout<<"The maximum number : "<<max(a,n)<<"\n";
   cout<<"The minimum number : "<<min(a,n)<<"\n";
   cout<<"The number of prime numbers : "<<v<<"\n";
   cout<<"The number of palindrome numbers : "<<cp<<"\n";
  cout<<"The number that has the maximum number of divisors : "<<maxd<<"\n";

    return 0;
}
