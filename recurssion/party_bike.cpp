#include<iostream>
using namespace std;
int ways(int n)
{
    if(n==0 or n==1)
    return 1;
 
 int ans=0;
 ans=ways(n-1)+(n-1)*ways(n-2);
 return  ans;
}
int main()
{
    int n;
    cin>>n;
 cout<<ways(n);
}