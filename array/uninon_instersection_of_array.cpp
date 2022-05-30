#include<iostream>
using namespace std;
void union_array(int *a,int*b,int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {cout<<a[i]<<" ";
        i++;}
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    if(i==n1)
    {for(;j<n2;j++)
    cout<<b[j]<<" ";
    }
    if(j==n2)
    {
        for(;i<n1;i++)
        cout<<a[i]<<" ";
    }
}

void intersection_array(int *a,int*b,int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
        i++;}
        else if(a[i]>b[j])
        {
            j++;
        }
        else {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    if(i==n1)
    {for(;j<n2;j++)
    cout<<b[j]<<" ";
    }
    if(j==n2)
    {
        for(;i<n1;i++)
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int arr1[]={2,3,5,6,7,8};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"union of array\n";
    union_array(arr,arr1,n1,n2);
    cout<<"\nIntersection of array\n";
    intersection_array(arr,arr1,n1,n2);
}