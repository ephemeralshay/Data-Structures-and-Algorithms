#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int temp[], int s, int mid, int e)
{
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
}

void mergesort(int arr[], int temp[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // find midpoint
    int mid = (s + ((e - s) >> 1));

    // left half
    mergesort(arr, temp, s, mid);

    // right half
    mergesort(arr, temp, mid + 1, e);

    // merge the two half runs
    merge(arr, temp, s, mid, e);
}

// TC - O(nlogn)
// SC - O(n)