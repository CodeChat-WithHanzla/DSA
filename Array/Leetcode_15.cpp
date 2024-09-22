#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> bruteForcethreeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        res.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            for (int j = i + 1; j < res.size(); j++)
                if (res[i] == res[j])
                {
                    res.erase(res.begin() + i);
                    j--;
                }
        }
        return res;
    }
    // This is my submission on leetcode
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = obj.threeSum(nums);
    for (vector<int> r : res)
    {
        cout << "[ ";
        for (int num : r)
            cout << num << "  ";
        cout << "] " << endl;
    }
}