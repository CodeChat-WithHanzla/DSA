#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int max_finder(vector<int> &candies)
    {
        int max = INT32_MIN;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > max)
                max = candies[i];
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> res;
        int max = max_finder(candies);
        for (int i = 0; i < candies.size(); i++)
        {
            int totalCandies = candies[i] + extraCandies;
            if (totalCandies >= max)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};