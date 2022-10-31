#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int ThreeSum(int arr[],int n,int key)
{
    for(int i=0;i<n-2;i++)
    {
       for(int j=i+1;j<n-1;j++)
       {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {
                    cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"]"<<endl;
                }
            }
       } 
    }
}
int main()
{
    int arr[]={5,40,2,7,8,2,0,4,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=14;
    ThreeSum(arr,n,key);
    return 0;
}