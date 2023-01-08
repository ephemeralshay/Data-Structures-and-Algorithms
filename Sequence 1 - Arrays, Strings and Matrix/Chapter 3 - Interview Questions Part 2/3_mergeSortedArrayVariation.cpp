#include <bits/stdc++.h>
using namespace std;

// Approach 1
class Solution1
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0;

        for (int j = m; j <= m + n - 1; j++)
        {
            nums1[j] = nums2[i];
            i++;
        }

        sort(nums1.begin(), nums1.end());
    }
};

// TC - O(N) + O(NlogN)
// SC - O(1)

// Approach 2 - Optimized
class Solution2
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (i >= 0)
        {
            nums1[k--] = nums1[i--];
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};

// TC - O(m+n)
// SC - O(1)