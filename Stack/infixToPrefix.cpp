#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int precedance(char op)
    {
        if (op == '^')
            return 3;
        if (op == '*' || op == '/')
            return 2;
        if (op == '+' || op == '-')
            return 1;
        return -1;
    }
    string infixToPrefix(string s)
    {
        stack<char> st;
        string result;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
                result += ch;
            else if (ch == ')')
                st.push(ch);
            else if (ch == '(')
            {
                while (!st.empty() && st.top() != ')')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && precedance(ch) < precedance(st.top()))
                {
                    result += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main()
{
    string s = "A+B-C*D";
    Solution obj;
    string res = obj.infixToPrefix(s);
    cout << res;
}