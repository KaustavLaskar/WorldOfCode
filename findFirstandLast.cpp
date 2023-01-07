#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void findFirstandLast(int arr[], int n, int x)
{
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(x!=arr[i])
        {
            continue;
        }
        if(first==-1)
        {
            first=i;
        }
        else
        {
            last=i;
        }
    }
    if(first!=-1)
    {
        cout<<"First Occurance is "<<first<<endl;
        cout<<"Last Occurance is "<<last<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}

int main()
{
    int arr[]={1,1,2,5,4,6,5,56,5,8,95,2,6,552,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    findFirstandLast(arr,n,1);
    return 0;
}