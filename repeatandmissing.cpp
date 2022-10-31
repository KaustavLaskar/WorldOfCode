#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
cout<<"REPETATINH ELEMENT IS..."<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]>0)
        {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        else
        {
            cout<< abs(arr[i])<<endl;
        }
    }
cout<<"MISSING ELEMENT IS....."<<endl;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
        {
            cout<<(i+1);
        }
    }
    
}

int main()
{
    int arr[]={1,2,3,4,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    
    return 0;
}