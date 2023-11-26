#include <bits/stdc++.h>
using namespace std;
int uniqueSubstrings(string s)
{
    int j = 0, ans = 0;
    unordered_map<char, int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        while (mp[s[i]] > 1)
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                mp.erase(s[j]);
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    ans = max(ans, n - j);
    return ans;
}