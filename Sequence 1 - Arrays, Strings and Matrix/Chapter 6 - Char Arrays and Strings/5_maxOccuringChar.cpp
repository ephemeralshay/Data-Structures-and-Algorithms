#include <bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s)
{
    char arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;

        // lower case only
        number = ch - 'a';
        arr[number]++;
    }

    // find max occ char (we don't need to find the count)
    int maxi = -1;
    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
