#include <iostream>
using namespace std;
int main()
{
int n=11;
int array1[n]={1,2,3,4,5,6};
int array2[5]={2,7,8,9,10};
for(int i=0;i<5;i++)
{
array1[i+6]=array2[i];
}
for(int i=0; i<n; i++)
{
for(int j=i+1;j<n;)
{
if(array1[i]==array1[j])
{
for (int k = j; k < n; k++)
{
array1[k] = array1[k + 1];
}
n--;
}
else
j++;
}
}
for(int k=0;k<10;k++)
{
cout<<array1[k]<<endl;
}
return 0;
}

