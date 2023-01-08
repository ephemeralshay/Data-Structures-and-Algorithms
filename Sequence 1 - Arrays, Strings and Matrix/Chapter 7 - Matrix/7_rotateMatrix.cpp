// by 90 deg clockwise
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void rotate(vector<vector<int>> &m)
    {
        // row size
        int n = m.size();

        // take transpose of the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                swap(m[i][j], m[j][i]);
            }
        }

        // reverse every row
        for (int i = 0; i < n; i++)
        {
            reverse(m[i].begin(), m[i].end());
        }
    }
};