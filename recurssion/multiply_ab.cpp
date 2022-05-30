#include<iostream>
using namespace std;
int mul_a_b(int a,int b)
{
if(b==1)
{
    return a;
}
return a+mul_a_b(a,b-1);
}
int main()
{
int a,b;
cin>>a>>b;
int ans=mul_a_b(a,b);
cout<<ans;
}