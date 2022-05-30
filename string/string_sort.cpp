#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string a,string b)
{
    return a.length()>b.length();
}
int main()
{
    string s[10];
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    

}