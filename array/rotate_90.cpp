#include<iostream>
#include<algorithm>
using namespace std;
void rotate_90(int arr[][10],int m,int n)
{
    for(int i=0;i<n;i++)
    reverse(arr[i],arr[i]+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {    if(i>j)
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void print_aray(int arr[][10],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {  cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
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
 print_aray(arr,m,n);
 rotate_90(arr,m,n);
 cout<<endl;
 print_aray(arr,m,n);
}
