// [7,1,5,3,6,4]
// [7,6,4,3,1]
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int left = 0;
        int right = 1;
        int max_profit = 0;
        while (right < prices.size())
        {
            if (prices[right] > prices[left])
                max_profit = max(max_profit, prices[right] - prices[left]);
            else
                left = right;
            right++;
        }
        return max_profit;
    }
};