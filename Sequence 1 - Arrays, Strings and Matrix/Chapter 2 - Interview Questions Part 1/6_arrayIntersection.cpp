#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    // Store ans
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                // any neg value
                arr2[j] = -2;
                break;
            }
        }
    }
}

// Optimized Solution 1
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    // Store ans
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            // Taking use of sorted array property
            if (element < arr2[j])
                break;

            if (element == arr2[j])
            {
                ans.push_back(element);
                // any neg value
                arr2[j] = -2;
                break;
            }
        }
    }
}

// Most Optimized ---- Two-pointer approach
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    int i = 0, j = 0;
    // Store ans
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}