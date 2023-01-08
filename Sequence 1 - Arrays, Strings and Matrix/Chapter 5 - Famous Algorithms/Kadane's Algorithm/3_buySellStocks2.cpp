#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(int arr[])
    {
        int profit = 0;
        int n = sizeof(arr) / sizeof(arr[0]);

        // no need to maintain local minima and maxima
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                profit += (arr[i] - arr[i - 1]);
            }
        }
        return profit;
    }
};