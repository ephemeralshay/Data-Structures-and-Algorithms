#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();

    // check for rotated array
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    // check last and first element
    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    // Check the case where all elements are same
    if (count <= 1)
    {
        return true;
    }
}

// Notes -
// 1. Only 1 pair where nums[i - 1] > nums[i] must exist in an unique sorted and rotated array
// 2. In case of 1 1 1 1 1, 0 such pairs exist, so we need to handle the case