#include<iostream>
using namespace std;
void printaray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int k;
    cin>>k;

    //using temp array
    int tem=k;
    int temp[7];
    int i=0;
    for(;i<k;i++)
    {
        temp[i]=arr[i];
    }
   while(tem--){
   for(int j=0;j<n;j++)
   {
     arr[j]=arr[j+1];
   }}
   i=0;
   for(int j=n-k;j<n;j++)
   {
       arr[j]=temp[i];
       i++;
   }
   printaray(arr,n);

   //using temp variable
   tem=k;
   int temp1;
   while(tem--)
   {
       temp1=arr[0];
       for(int i=0;i<n;i++)
       {
           arr[i]=arr[i+1];
       }
       arr[n-1]=temp1;
   }
   cout<<endl;
   printaray(arr,n);
}