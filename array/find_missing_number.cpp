#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum = (n+1)*(n+2)/2;
    int csum=arr[0];
    int x2=arr[0];
    for(int i=1;i<n;i++)
    {
    csum+=arr[i];
    x2=x2^arr[i];
    }
    cout<<"using total sum: "<<sum-csum<<endl;

    //using xor
    int *x = new int[n+1];
    int x1=1;
    
    for(int i=2;i<=n+1;i++)
    {
        x[i]=i;
        x1=x1^x[i];
    }

    cout<<"using xor: "<<(x1^x2);

}