// rounds = n - 1
// shifting
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // right shift
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }

        // inserting element at right place
        arr[j + 1] = temp;
    }
}

// Use Cases - Highly adaptable algorithm
// Stable algorithm
// n small good performance
// partially sorted array, good performance

// TC - O(n^2)  best case - o(n)
// SC - O(1)