#include <bits/stdc++.h>
using namespace std;

// Approach 1 - Linear Space
int rainWater(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);

    int left[n];
    int right[n];

    // making left arr
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    // making right arr
    right[n - 1] = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (min(left[i], right[i]) - arr[i]);
    }

    return ans;
}

// TC - O(N)
// SC - O(2N)

// Approach 2 - Constant Space
int trap(int heights[], int n)
{
    int left = 0;
    int right = n - 1;
    int water = 0;

    int maxLeft = heights[left];
    int maxRight = heights[right];

    while (left < right)
    {
        if (heights[left] <= heights[right])
        {
            left++;
            maxLeft = max(maxLeft, heights[left]);
            water += (maxLeft - heights[left]);
        }
        else
        {
            right--;
            maxRight = max(maxRight, heights[right]);
            water += (maxRight - heights[right]);
        }
    }

    return water;
}