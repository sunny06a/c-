#include<iostream>
using namespace std;
void reverse(int *arr,int s,int e)
{
while(s<e)
{
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
   s++;
    e--;
}
}
void printaray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
   reverse(arr,0,k-1);
   reverse(arr,k,n-1);
   reverse(arr,0,n-1);
printaray(arr,n);
}