#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxPro = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            // find min price for stock
            minPrice = min(minPrice, prices[i]);

            // find max Profit by selling stocks on each day
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        return maxPro;
    }
};