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
 int key;
 cin>>key;
 int i=0,j=n-1;
 while(i<m && j>=0)
 {
     if(arr[i][j]>key)
     {
         j--;
     }
     else if(arr[i][j]<key)
     {
         i++;
     }
     else
     {cout<<i<<" "<<j;
     break;}
 }
}