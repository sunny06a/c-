#include<iostream>
#include<algorithm>
using namespace std;
void b_search(int *arr, int n, int x)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Element not found" << endl;
}
int main()
{ int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the number to be searched: "; 
    cin>>x;
    sort(arr,arr+n);
    b_search(arr,n,x);
    }
