#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    // Write Your Code Here
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        if (n == 1)
        {
            return x;
        }
        return myPow(x, n - 1) * x;
    }
    if (n < 0)
    {
        if (n == -1)
        {
            return 1 / x;
        }
        return myPow(x, n + 1) * 1 / x;
    }
}