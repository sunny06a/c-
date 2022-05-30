#include<iostream>
#include<string.h>
using namespace std;   
void duplicate_remove(char *a,int n)
{
    int i=0,j=1;
    while(j<n)
    {
        if(a[j]!=a[i])
        {
            i++;
             a[i]=a[j];
           
        }
        j++;
    }
    a[i+1]='\0';
    cout<<"after removing duplicate : "<<a<<endl;
}
int main()
{
    char arr[1000];
    cin>>arr;
    int n=strlen(arr);
    duplicate_remove(arr,n);

}