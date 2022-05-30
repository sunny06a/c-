#include<iostream>
using namespace std;
int main()

    {
        int a[10] = {1,2,3,4,5,6,7,8,9,10};
        int n = sizeof(a)/sizeof(a[0]);
        int x;
        cout<<"Enter the number to be searched: ";
        cin>>x;
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                cout<<"Element found at index "<<i<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"Element not found"<<endl;
        }
    }
