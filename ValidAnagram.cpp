#include <bits/stdc++.h>
#include <iostream>
using namespace std;


bool validAnagram(string a,string b)
{
    int n1=a.length();
    int n2=b.length();

    if(n1 != n2)
    {
        return false;
    }
    else
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i=0;i<n1;i++)
        {
            if(a[i]!=b[i])
            return false;
        }
            return true;
    }
}

int main()
{
    string a = "abfcd";
    string b = "dbrca";
    if (validAnagram(a, b))
        cout<< "VALID ANAGRAM" << endl;
    else
        cout<<"NOT VALID ANAGRAM"<<endl;
    return 0;
}