#include <bits/stdc++.h>
using namespace std;

// print row wise sum
void printRowSum(int arr[][3], int row, int col)
{
    cout << "Row wise sum: " << endl;
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
}

// print col wise sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "Col wise sum: " << endl;
    int sum = 0;
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
}
