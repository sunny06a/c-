#include<iostream>
#include<algorithm>

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
int i, j, temp;
 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] == i) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                break;
            }
        }
    }
for(int i=0;i<n;i++)
{
    if(arr[i]==i)
    continue;
    else
    arr[i]=-1;
}    
printaray(arr,n);
}
