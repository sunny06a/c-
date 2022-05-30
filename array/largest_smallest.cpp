#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>a[i];
    }
 int max=INT16_MIN;
 int min=INT16_MAX;
 for(int i=0;i<n;i++)
 {
     if(a[i]>max)
     {
         max=a[i];
     }
     if(a[i]<min)
     {
         min=a[i];
     }
 }
 cout<<"max: "<<max<<endl;
 cout<<"min: "<<min<<endl;

}