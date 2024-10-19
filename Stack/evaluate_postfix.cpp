#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;
class Solution
{
public:
    int evaluation(string s)
    {
        stringstream ab(s);
        stack<int> st;
        string token;
        vector<string> tokens;
        while (ab >> token)
        {
            tokens.push_back(token);
        }
        for (int i = 0; i < token.size(); i++)
        {
            string ch = tokens[i];
            if (isdigit(ch[0]) || (ch.size() > 1 && ch[0] == '-'))
            {
                int val = stoi(ch);
                st.push(val);
            }
            else
            {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                switch (ch[0])
                {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                case '^':
                    st.push(pow(op1, op2));
                    break;
                default:
                    break;
                }
            }
        }
        int result = st.top();
        return result;
    }
};
int main()
{
    string str = "10 2 5 / -";
    // str.erase(remove(str.begin(), str.end(), ' '), str.end());
    Solution obj;
    int res = obj.evaluation(str);
    cout << res;
}