#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    // make a temp array of size = nums.size()
    int n = nums.size();
    vector<int> temp(n);

    // cyclically assign each index its rotated value
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    // copy temp to nums
    nums = temp;
}