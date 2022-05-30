#include<iostream>
using namespace std;
void spiral_print(int arr[][10],int m,int n)
{
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;
    while(sc<=ec && sr<=er)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<arr[i][ec]<<" "; 
        }
        ec--;
        if(er>sr){
        for(int i=ec;i>=sc;i--)
        {
            cout<<arr[er][i]<<" ";
        }
        er--;}
        if(ec>sc)
        {
        for(int i=er;i>=sr;i--)
        {
            cout<<arr[i][sc]<<" "; 
        }
        sc++;}
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
spiral_print(arr,m,n);  
}