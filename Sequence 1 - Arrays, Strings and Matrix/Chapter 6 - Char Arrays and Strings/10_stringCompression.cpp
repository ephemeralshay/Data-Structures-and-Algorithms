#include <bits/stdc++.h>
using namespace std;

// in-places solution

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        // for traversing entire vector
        int i = 0;
        // for inserting count in the same string
        int ansIndex = 0;
        int n = chars.size();

        while (i < n)
        {
            int j = i + 1;
            while (j < n && chars[i] == chars[j])
            {
                j++;
            }
            // we come out of loop whenever we encounter different element or traverse the entire vector
            // store the oldChar
            chars[ansIndex++] = chars[i];

            // count of oldChar
            int count = j - i;

            if (count > 1)
            {
                // convert count into single digit and saving the answer (handle count > 10)
                string cnt = to_string(count);
                for (char ch : cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }

            // moving to different/new character
            i = j;
        }
        return ansIndex;
    }
};

// TC - O(n)
// SC - O(1)