#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // arr2 exhausted
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // arr1 exhausted
    while (j < n)
    {
        arr3[k++] = arr1[j++];
    }
}
