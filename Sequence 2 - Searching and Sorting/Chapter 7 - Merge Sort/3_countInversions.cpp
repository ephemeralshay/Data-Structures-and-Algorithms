#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int s, int mid, int e)
{
    int inversionCount = 0;
    int k = s;
    int i = s;
    int j = mid + 1;

    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inversionCount += (mid - i + 1);
        }
    }

    // copy remaining elements
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    // copy back to the original array
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }

    return inversionCount;
}

int mergesort(int arr[], int temp[], int s, int e)
{
    // base case
    if (s >= e)
    {
        // if run size == 1
        return;
    }

    // find midpoint
    int mid = (s + ((e - s) >> 1));
    int inversionCount = 0;

    // left half
    inversionCount += mergesort(arr, temp, s, mid);

    // right half
    inversionCount += mergesort(arr, temp, mid + 1, e);

    // merge the two half runs.
    inversionCount += merge(arr, temp, s, mid, e);

    return inversionCount;
}

// TC - O(nlogn)
// SC - O(n)