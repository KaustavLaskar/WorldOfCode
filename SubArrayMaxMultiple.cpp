#include <bits/stdc++.h>
using namespace std;

int SubArrayMaxMultiple(int arr[],int n)
{
    int result=arr[0];
    for(int i=0;i<n-1;i++)
    {
        int mul=arr[i];
        for(int j=i+1;j<n;j++)
        {
            result=max(result, mul);
            mul=mul*arr[j];
        }
    }
    return result;
}

int main()
{
    int arr[]={2,-3,-2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << SubArrayMaxMultiple(arr,n)<<endl;
    return 0;
}
