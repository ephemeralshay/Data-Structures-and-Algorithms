#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> res;

        // no input is given
        if (intervals.size() == 0)
        {
            return res;
        }

        // sort the intervals
        sort(intervals.begin(), intervals.end());

        // push the first interval
        vector<int> curr = intervals[0];

        // if intervals do not merge
        for (int i = 1; i < intervals.size(); i++)
        {
            if (curr[1] < intervals[i][0])
            {
                res.push_back(curr);
                curr = intervals[i];
            }
            // if they merge
            else
            {
                curr[1] = max(curr[1], intervals[i][1]);
            }
        }

        res.push_back(curr);
        return res;
    }
};