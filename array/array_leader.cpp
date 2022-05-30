#include<iostream>
using namespace std;
int main()
{
    int arr[]={20,17,8,9,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx_element=arr[n-1];
    cout<<mx_element<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(mx_element<arr[i])
        {
            cout<<arr[i]<<" ";
            mx_element=arr[i];
        }
    }
}