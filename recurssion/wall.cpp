#include<iostream>
using namespace std;
int wall_tile(int n)
{
    if(n<=3)
    {
        return 1;
    }
    return wall_tile(n-1)+wall_tile(n-4);
}
int main()
{
    int n;
    cin>>n;
    int ans=wall_tile(n);
    cout<<ans;
}