#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    // Write your code here
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i])
            {
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}