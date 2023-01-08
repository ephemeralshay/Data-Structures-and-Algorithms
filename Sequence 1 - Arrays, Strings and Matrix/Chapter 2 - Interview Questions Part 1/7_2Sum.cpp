#include <bits/stdc++.h>
using namespace std;

// Approach 1
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

// Approach 2 - optimized
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            res.push_back(mp[target - nums[i]]);
            res.push_back(i);
            return res;
        }
        mp[nums[i]] = i;
    }
    return res;
}