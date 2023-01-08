#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = (int)(nums.size());
        vector<vector<int>> res;

        // sort the array
        sort(nums.begin(), nums.end());

        // moves for a
        for (int i = 0; i < n - 2; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                // 2 pointer approach
                int lo = i + 1;
                int hi = n - 1;
                int sum = 0 - nums[i];

                while (lo < hi)
                {
                    if (nums[lo] + nums[hi] == sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp);

                        // after sum is found, move lo and hi such that they encounter a new numsber
                        while (lo < hi && nums[lo] == nums[lo + 1])
                        {
                            lo++;
                        }

                        while (lo < hi && nums[hi] == nums[hi - 1])
                        {
                            hi--;
                        }

                        lo++;
                        hi--;
                    }
                    else if (nums[lo] + nums[hi] < sum)
                    {
                        lo++;
                    }
                    else
                    {
                        hi--;
                    }
                }
            }
        }
        return res;
    }
};