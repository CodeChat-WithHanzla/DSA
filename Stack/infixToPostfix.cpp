#include <stack>
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int precedence(char op)
    {
        if (op == '^')
            return 3;
        if (op == '*' || op == '/')
            return 2;
        if (op == '+' || op == '-')
            return 1;
        return -1;
    }
    string infixToPostfix(string s)
    {
        stack<char> st;
        string result;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
                result += c;
            else if (c == '(')
                st.push(c);
            else if (c == ')')
            {
                while (st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && precedence(c) <= precedence(st.top()))
                {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        return result;
    }
};
int main()
{
    string s = "A*(B+C)/D";
    Solution obj;
    string res = obj.infixToPostfix(s);
    cout << res;
}