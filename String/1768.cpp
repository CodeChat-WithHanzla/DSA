#include <iostream>
using namespace std;
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string res = "";
        if (word1.length() >= word2.length())
        {
            for (int i = 0; i < word1.length(); i++)
            {
                res += word1[i];
                res += word2[i];
            }
        }
        else
        {
            for (int i = 0; i < word2.length(); i++)
            {
                res += word1[i];
                res += word2[i];
            }
        }

        return res;
    }
};
int main()
{
    Solution obj;
    string res = obj.mergeAlternately("ab", "pqrs");
    cout << res << endl;
}