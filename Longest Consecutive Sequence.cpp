#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    if (!n)
        return 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) != s.end())
            continue;
        else
        {
            int cnt = 1;
            int x = arr[i];
            while (s.find(x + 1) != s.end())
            {
                cnt++;
                x++;
            }
            ans = max(ans, cnt);
        }
    }
    return ans;
}