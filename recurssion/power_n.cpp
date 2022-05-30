#include<iostream>
using namespace std;
int power_of_n(int x,int n)
{
if(n==0)
{
    return 1;
}
if(n<0)
{
    return -1;
}
return x*power_of_n(x,n-1);
}
int fast_power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans=fast_power(x,n/2);
    ans*=ans;
    if(n&1)
    {
        return x*ans;
    }
    else 
    {
        return ans;
    }

}
int main()
{
    int n,x;
    cin>>x>>n;
    int ans=power_of_n(x,n);
    cout<<"powwer: "<<ans<<endl;
    ans=fast_power(x,n);
    cout<<"fast power: "<<ans<<endl;
}