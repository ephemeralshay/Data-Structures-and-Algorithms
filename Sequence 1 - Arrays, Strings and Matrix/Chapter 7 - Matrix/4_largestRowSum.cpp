#include <bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }

    if (sum > maxi)
    {
        maxi = sum;
        rowIndex = row;
    }

    cout << "The largest row sum is: " << maxi << endl;
    return rowIndex;
}
