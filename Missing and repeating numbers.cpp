#include <bits/stdc++.h>
using namespace std;
pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    sort(arr.begin(), arr.end());
    int count = 1;
    int missingno = -1;

    int repeatedno = -1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > count)
        {

            missingno = count;

            count += 2;
        }

        else if (arr[i] == count)
        {

            count++;
        }

        else if (count > arr[i])
        {

            repeatedno = arr[i];
        }
    }

    if (missingno == -1)
    {

        missingno = n;
    }

    return {missingno, repeatedno};
}