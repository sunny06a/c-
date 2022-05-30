#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,6,7,8,4,2,5,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3,y=4;
    int dis=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((x==arr[i] &&y==arr[j] || y==arr[i] && x==arr[j] ) && dis>abs(i-j))
            {
                dis=abs(i-j);
            }
        }
    }
    cout<<dis<<endl;

    //using 1 loop
    int min_dis=INT16_MAX;
    int pre;
    int i=0;
    for(;i<n;i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
         pre=i;
         break;
        }
    }
    for(;i<n;i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if(arr[pre]!=arr[i] && (i-pre)<min_dis)
            {
                min_dis=i-pre;
                pre=i;
            }
            else
            pre=i;
        }
    }
 cout<<min_dis<<endl;   
}