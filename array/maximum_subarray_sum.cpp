#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {-2, -3, 4, -1, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //using 3 loops
    int max=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {    int curr_sum=0;
            for(int k=i;k<=j;k++)
            {
                curr_sum+=arr[k];
                if(curr_sum>max)
                    max=curr_sum;
            }
        }
    }
     cout<<"using 3 loops : "<<max<<endl;
   
   //using cumulative sum 2 loops
   int csum[5];
    csum[0]=arr[0];
    int max_sum=INT16_MIN;
    for(int i=1;i<n;i++)
    {
        csum[i]=csum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int _curr_sum=csum[j]-csum[i]+arr[i];
          if(_curr_sum>max_sum)
            max_sum=_curr_sum;
        }
    }
    cout<<"using cumulative sum 2 loops : "<<max_sum<<endl;

    //using kadane's algorithm 
    int max_sum1=INT16_MIN;
    int curr_sum_=0;
    for(int i=0;i<n;i++)
    {
        curr_sum_+=arr[i];
        if(curr_sum_>max_sum1)
            max_sum1=curr_sum_;
        if(curr_sum_<0)
            curr_sum_=0;
    }
    cout<<"using kadane's algorithm : "<<max_sum1<<endl;
}