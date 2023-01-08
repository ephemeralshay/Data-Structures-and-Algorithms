#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create 2D Array
    int arr[3][4];

    // taking input - row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // taking input - column wise input
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[col][row];
        }
    }

    // printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}