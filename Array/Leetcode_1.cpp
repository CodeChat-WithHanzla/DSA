#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        /*
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }*/
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums[i];
            if (seen.find(compliment) != seen.end())
            {
                return {seen[compliment], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
