#include<iostream>
using namespace std;

int first_occur(int *arr,int n,int k)
{
if(n==0)
{return -1;}

if(arr[0]==k)
{return 0;}

int i=first_occur(arr+1,n-1,k);
if(i==-1)
{return -1;}
else
return i+1;
}


int last_occur(int *arr,int n,int k)
{

if(n==0)
{return -1;}


int i=last_occur(arr+1,n-1,k);
if(i==-1)
{
    if(arr[0]==k)
    {return 0;}
    else
    {return -1;}
}
return i+1;
}

int all_occur(int *arr,int i,int n,int k)
{
if(i==n)
return -1;

if(arr[i]==k)
{
    cout<<i<<" ";
}
all_occur(arr,i+1,n,k);

}
int linear_serch(int *arr,int i,int n,int k)
{
    if(i==n) 
    return -1;
    
    if(arr[i]==k)
    return i;
    
    return linear_serch(arr,i+1,n,k);
}

int out_array(int *arr,int i,int n,int k,int *outp,int j)
{
if(i==n)
{return j;}
if(arr[i]==k)
{
    outp[j]==i;
   return out_array(arr,i+1,n,k,outp,j+1);
}
return out_array(arr,i+1,n,k,outp,j);
}
int main()
{
    int arr[]={1,2,3,5,6,8,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    cout<<first_occur(arr,n,k);
    cout<<endl;
    cout<<last_occur(arr,n,k)<<endl;
    cout<<linear_serch(arr,0,n,k)<<endl;
    cout<<all_occur(arr,0,n,k)<<endl;
    int out[100];
    int cnt = out_array(arr,n,0,k,out,0);
    for(int i=0;i<cnt;i++)
    {
        cout<<out[i]<<" ";
    }
    
}