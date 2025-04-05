#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9'))
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 32;
                    ans += s[i];
                }
                else
                    ans += s[i];
            }
        }
        int size = ans.size();
        for (int i = 0; i < size; i++)
        {
            if (ans[i] != ans[size - i - 1])
                return false;
        }
        return true;
    }
};