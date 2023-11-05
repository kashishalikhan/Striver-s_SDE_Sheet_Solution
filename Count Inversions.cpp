#include <bits/stdc++.h>
using namespace std;
long long getInversions(long long *arr, int n)
{
    // Write your code here.
    vector<pair<long long, long long>> man;
    for (int i = 0; i < n; i++)
    {
        man.push_back({arr[i], i});
    }
    sort(man.begin(), man.end());
    set<long long> curr;
    long long ans = 0;
    curr.insert(man[0].second);
    for (int i = 1; i < n; i++)
    {
        auto idx = curr.upper_bound(man[i].second);
        if (idx != curr.end())
        {
            int pos = distance(curr.begin(), idx);
            ans += curr.size() - pos;
        }
        curr.insert(man[i].second);
    }
    return ans;
}