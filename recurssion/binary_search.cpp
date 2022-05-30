#include<iostream>
using namespace std;
bool binary_searc(int arr[],int s,int e,int k)
{
 if(e>=1){   
int mid=s+(e-1)/2;
if(arr[mid]==k)
{
    return true;
}

if(arr[mid]>k)
{
return binary_searc(arr,s,mid-1,k);
}
else if(arr[mid]<k)
{
  return  binary_searc(arr,mid+1,e,k);
}
 }
return false;

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    cout<<binary_searc(arr,0,n,k);
}