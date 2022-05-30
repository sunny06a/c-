#include<iostream>
#include<string.h>
using namespace std;
int conv(char *c,int n)
{
    if(n==0)
    {
        return 0;
    }
    int last=c[n-1]-'0';
    int ans=conv(c,n-1);
    return ans*10+last;
}
int main()
{
    char c[10];
    cin>>c;
    int len=strlen(c);
    int ans=conv(c,len);
    cout<<ans;
    cout<<"\n"<<ans+1;
}