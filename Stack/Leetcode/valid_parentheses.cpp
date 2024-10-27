// https://leetcode.com/problems/valid-parentheses/description/?envType=problem-list-v2&envId=stack
#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            else if (ch == ')' && (!st.empty() && st.top() == '('))
                st.pop();
            else if (ch == ']' && (!st.empty() && st.top() == '['))
                st.pop();
            else if (ch == '}' && (!st.empty() && st.top() == '{'))
                st.pop();
            else
                return false;
        }
        if (st.empty())
            return true;
        return false;
    }
};
int main()
{
    string s = "([])";
    Solution st;
    bool res = st.isValid(s);
    if (res)
        cout << "Valid";
    else
        cout << "Invalid";
}