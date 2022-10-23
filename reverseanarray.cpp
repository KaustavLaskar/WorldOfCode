#include <iostream>
using namespace std;

void reverseArray(int arr[],int start, int end)
{
    while (start<end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={2,5,6,7,8,9,10,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,0,n-1);

    printArray(arr,n);

    return 0;
}