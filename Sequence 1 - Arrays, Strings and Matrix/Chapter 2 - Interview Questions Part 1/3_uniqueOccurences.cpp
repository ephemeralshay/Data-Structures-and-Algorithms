#include <bits/stdc++.h>
using namespace std;

// Approach 1
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        // counting occurences of elements
        map<int, int> mp;
        for (int x : arr)
        {
            mp[x] += 1;
        }

        // inserting occurences in a set to check if it already exists
        unordered_set<int> st;
        for (auto it : mp)
        {
            if (st.count(it.second) > 0)
            {
                return false;
            }
            else
            {
                st.insert(it.second);
            }
        }
        return true;
    }
};

// Approach 2 - similar to string compression and optimized
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        vector<int> ans;
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int i = 0;
        while (i < n)
        {
            int j = i + 1;
            while (j < n && arr[i] == arr[j])
            {
                j++;
            }

            int freq = j - i;

            ans.push_back(freq);

            i = j;
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
            {
                return false;
            }
        }

        return true;
    }
};