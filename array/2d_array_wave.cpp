#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int m,n;
    cin>>m>>n;
    int val=1;
    for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
    arr[i][j]=val;
    val++;
     }
 }    
 for(int i=0;i<n;i++){
     if(i%2==0)
     {for(int j=0;j<n;j++)
     {
         cout<<arr[j][i]<<" ";
     }
     cout<<endl;}
     
     else 
     {
         for(int j=m-1;j>=0;j--)
         {
             cout<<arr[j][i]<<" ";
         }
     cout<<endl;
     }
     
 }
}