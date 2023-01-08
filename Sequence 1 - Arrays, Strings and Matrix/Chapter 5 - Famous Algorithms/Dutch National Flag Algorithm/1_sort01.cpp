#include <bits/stdc++.h>
using namespace std;

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // arr[left] == 1 and arr[right] == 0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
// OR

// Same logic but a different way of writing the code
void segregate0and1(int arr[], int size)
{
    int type0 = 0;
    int type1 = size - 1;

    while (type0 < type1)
    {
        if (arr[type0] == 1)
        {
            if (arr[type1] != 1)
            {
                swap(arr[type0], arr[type1]);
            }
            type1--;
        }
        else
        {
            type0++;
        }
    }
}