#include<iostream>
#include<string.h>

using namespace std;   
int main()
{
    char arr[1000];
    cin>>arr;
    int n=strlen(arr);
    for(int i=0;i<(n-1)/2;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"not palindrome"<<endl;
            return 0;
        }
       
    }

}