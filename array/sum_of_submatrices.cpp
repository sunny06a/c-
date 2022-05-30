#include<iostream>
using namespace std;
int main()
{ int r,c;
   cin>>r>>c;
    int **arr=new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
   int val=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }
 for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=i+1;k<r;k++)
            {
                for(int l=j+1;l<c;l++)
                {
                    for(int a=i;i<k;a++)
                    {
                        for(int b=j;b<l;b++)
                        {
                            cout<<arr[a][b]<<" ";
                        }
                    }
                }
                
            }
            cout<<endl;
        }
    }


    for(int i=0;i<c;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

}