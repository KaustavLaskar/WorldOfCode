#include <iostream>
using namespace std;

int maxSubarray(int arr[],int n)
{
    int CurrentSum=0,MaxSum=0;
    for(int i=0;i<n;i++)
    {
        CurrentSum=CurrentSum+arr[i];
        if(CurrentSum>MaxSum)
        MaxSum=CurrentSum;
        if(CurrentSum<0)
        CurrentSum=0;
    }
    return MaxSum;
}

int main()
{
    int arr[]={2,56,-59,10,5,-20,45,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarray(arr,n);
    return 0;
}