#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    // check to allocate total pages to each student lesser than mid value
    for (int i = 0; i < n; i++)
    {
        // if elements can be added, add them
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        // if total sum for student 1 exceeds the value of mid, incraese the student count
        else
        {
            studentCount++;

            // reject solution if student count exceeds given count or arr element's value is greater than mid
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }

            // increase page sum for next student
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;

    // search space end = sum of all elements of arr
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        // save possible solution and minimize the search space
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        // reject the impossible search space
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}