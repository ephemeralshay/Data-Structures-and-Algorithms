#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = e + (s - e) / 2;

        // s <= e should not be written as we we check arr[mid] < arr[mid+1] again after finding the answer
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }

            mid = e + (s - e) / 2;
        }
        return s;
    }
};