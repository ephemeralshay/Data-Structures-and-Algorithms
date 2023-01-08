#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Rounds = n - 1

// SC -  O(1)
// Time Complexity: O(n^2) - Same in worst case and best case

// Use Cases:
// 1. When the list is smaller in size and there are some memory constraints
