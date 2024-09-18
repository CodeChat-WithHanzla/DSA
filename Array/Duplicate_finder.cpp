// Problem :
// You are given an array 'ARR' of size 'N' containing each number between 1 and 'N' - 1 at least once.
// There is a single integer value that is present in the array twice.
// Your task is to find the duplicate integer value present in the array.
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int duplicate(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= nums[i];
        }
        for (int i = 1; i < nums.size(); i++)
        {
            ans ^= i;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 4, 3, 1};
    cout << obj.duplicate(nums) << " ";
}