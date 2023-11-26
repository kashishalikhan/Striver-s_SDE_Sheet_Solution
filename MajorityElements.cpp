#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v)
{
    int n = v.size();
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (auto it : v)
    {
        mpp[it] += 1;
    }
    int res = floor(n / 3);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
    }
    for (int el : st)
    {
        auto it = mpp.find(el);
        if (it != mpp.end() && it->second > res)
        {
            ans.push_back(el);
        }
    }
    return ans;
}
