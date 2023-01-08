#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// case sensitive
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// case insensitive
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
