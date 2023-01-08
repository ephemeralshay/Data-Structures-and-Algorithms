#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // row and col size
        int row = matrix.size();
        int col = matrix[0].size();

        int i = 0, j = col - 1;
        while (i < row && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return 1;
            }
            if (matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return 0;
    }
};
