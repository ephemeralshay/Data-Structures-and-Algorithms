#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        // decalre a stack for operation and string for storing result
        stack<int> st;
        string res;

        // if the next element to be pushed is equal to st.top(), pop it
        for (int i = 0; i < s.length(); i++)
        {
            if (!st.empty() && st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        // remove elements from stack
        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }

        // reverse the res string
        reverse(res.begin(), res.end());

        return res;
    }
};