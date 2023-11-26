#include <bits/stdc++.h>
using namespace std;
int subarraysWithSumK(vector<int> a, int b)
{
    int xr = 0;
    map<int, int> mpp;
    mpp[xr] = 1;
    int pre = 0;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        xr = xr ^ a[i];
        int remove = xr ^ b;
        cnt += mpp[remove];
        mpp[xr] += 1;
    }
    return cnt;
}