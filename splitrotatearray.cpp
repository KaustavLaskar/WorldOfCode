#include <bits/stdc++.h>
using namespace std;

void splitArray(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        int x=arr[0];
        for(int j=0;j<n-1;++j)
        {
            arr[j]=arr[j+1];
            arr[n-1]=x;
        }
    }
}

int main()
{
    int arr[]={110,15,45,14,31,365};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    splitArray(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}