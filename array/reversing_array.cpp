#include<iostream>
#include<algorithm>
using namespace std;
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverse_iterative(int arr[],int s,int e,int n)
{
while(s<e)
{
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
}
print_array(arr,n);
}

void reverse_recurse(int arr[],int s,int e,int n)
{
    if(s>e)
    return;
 int temp=arr[s];
 arr[s]=arr[e];
 arr[e]=temp;
 return reverse_recurse(arr,s+1,e-1,n);
 print_array(arr,n);   
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse_iterative(arr,0,n-1,n);
    reverse_recurse(arr,0,n-1,n);
}