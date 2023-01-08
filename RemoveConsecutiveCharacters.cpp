#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveCharecter(char*s)
{
    if(s[0]=='\0')
    {
        return;
    }
    if(s[0]==s[1])
    {
        int i=0;
        while (s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
        removeConsecutiveCharecter(s);
    }
    removeConsecutiveCharecter(s+1);
}


int main()
{
    char S1[] = "geeksforgeeks";
    removeConsecutiveCharecter(S1);
    cout << S1 << endl;
    char S2[] = "aabcca";
    removeConsecutiveCharecter(S2);
    cout << S2 << endl;
    return 0;
}
