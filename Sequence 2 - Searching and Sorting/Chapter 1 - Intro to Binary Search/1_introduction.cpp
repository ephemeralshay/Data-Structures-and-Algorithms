// Condition for applying Binary Search - The element must be in monotonic function (sorted in ascending/descending order)
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // modified to avoid int overflow
    int mid = start + (end - start) / 2; // start + (end - start) / 2 is same as (start + end) / 2

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // Go to right
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Go to left
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
