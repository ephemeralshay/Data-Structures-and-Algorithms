#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        int num1 = -1;
        int num2 = -1;
        int count1 = 0;
        int count2 = 0;

        // algorithm for searching two majority elements
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == num1)
            {
                count1++;
            }
            else if (nums[i] == num2)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                num1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0)
            {
                num2 = nums[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        // check the count for which num1 and num2 occur
        vector<int> ans;
        count1 = count2 = 0;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == num1)
            {
                count1++;
            }

            else if (nums[i] == num2)
            {
                count2++;
            }
        }
        if (count1 > size / 3)
        {
            ans.push_back(num1);
        }
        if (count2 > size / 3)
        {
            ans.push_back(num2);
        }

        return ans;
    }
};

// TC - O(N) + O(N)
// SC - O(1)

// The majority element will be at max 2 because it should be > floor(N/3) times and if you mod 3 with any num at max you can get 2 as remainder, else it would have been exceed n.