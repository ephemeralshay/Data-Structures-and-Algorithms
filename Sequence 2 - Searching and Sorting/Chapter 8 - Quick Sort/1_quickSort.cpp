#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    // assume 1st element of arr as pivot element
    int pivot = arr[s];

    // count elements smaller than pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place the pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // place smaller elements and larger elements to the left and right of arr[pivotIndex] respectively
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // perform partition
    int p = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, p - 1);

    // sort right part
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// TC - O(nlogn)
// SC - O(n)