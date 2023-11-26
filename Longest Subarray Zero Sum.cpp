#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector<int> arr)
{
    unordered_map<int, int> mpp;
    int sum = 0;
    int len = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            len = max(len, i + 1);
        }
        int rem = sum;
        if (mpp.find(rem) != mpp.end())
        {
            len = max(len, i - mpp[rem]);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return len;
}
