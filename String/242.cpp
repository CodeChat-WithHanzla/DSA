#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        // return true;
        // else
        // return false;

        unordered_map<char, int> count;
        for (char c : s)
            count[c]++;

        for (char c : t)
        {
            count[c]--;
            if (count[c] < 0)
                return false;
        }
        return true;
    }
};