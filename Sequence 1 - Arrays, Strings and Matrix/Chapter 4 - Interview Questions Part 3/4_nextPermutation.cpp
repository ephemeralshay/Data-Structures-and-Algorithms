#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();

        // only 1 element is given
        if (n == 1)
        {
            return;
        }

        // step 1 - find index 1
        int idx1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                idx1 = i;
                break;
            }
        }

        // if input is in descending order, reverse it
        if (idx1 < 0)
        {
            reverse(nums.begin(), nums.end());
        }

        // step 2 - find index 2
        else
        {
            int idx2 = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (nums[i] > nums[idx1])
                {
                    idx2 = i;
                    break;
                }
            }

            // step 3 - swap index 1 and index 2
            swap(nums[idx1], nums[idx2]);

            // step 4 - reverse or sort
            reverse(nums.begin() + idx1 + 1, nums.end());
        }
    }
};