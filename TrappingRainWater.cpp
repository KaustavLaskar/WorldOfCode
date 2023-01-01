#include <bits/stdc++.h>
using namespace std;

int rainWater(vector<int> a)
{
    stack<int> st;
    int n=a.size(); ans=0;
    for(int i=0;i<n;i++)
    {
        while(st.empty() && a[st.top()] < a[i])
        {
            int current= st.top();
            st.pop();
            if(st.empty())
            {
                break;
            }
            int diff=i-st.top()-1;
            ans+= (min(a[st.top() a[i]]) -a[current]);
        }
        st.push(i);
    }
    return ans;
}


int32_t main()
{
    vector<int> a={2,1,4,0,4,5,7,9};
    cout<<rainWater(a);
    return 0;
}
