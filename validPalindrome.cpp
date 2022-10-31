#include <bits/stdc++.h>
#include <iostream>
#include<string.h>
using namespace std;

bool validpalindrome(string str,int n,int l,int r)
{
    for(int i=0;i<n-1;i++)
    {
        str[i]=tolower(str[i]);
    }
    while(l<r)
    {
        if (!(str[l] >= 'a' && str[l] <= 'z'))
        {
            l++;
        }

        else if (!(str[r] >= 'a' && str[r] <= 'z'))
        {
            r--;
        }
        else if(str[l]==str[r])
        {
            l++;r--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "Too hot to hoot.";
    if(validpalindrome(str,str.length(),0,str.length()-1))
    {
        cout<<"Sentense is palindrome"<<endl;
    }
    else
    {
        cout<<"Sentence is Not palindrome"<<endl;
    }
    return 0;
}