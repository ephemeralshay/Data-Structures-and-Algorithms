#include <bits/stdc++.h>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // maxi = max(maxi, num[i]);

        if (num[i] > maxi)
        {
            maxi = num[i];
        }
    }

    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // mini = min(mini, num[i]);

        if (num[i] < mini)
        {
            mini = num[i];
        }
    }

    return mini;
}
