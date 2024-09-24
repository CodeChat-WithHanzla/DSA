#include <vector>
using namespace std;
class Solution
{
public:
    int firstOccurance(vector<int> &nums, int target)
    {
        int ans = -1;
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return ans;
    }
    int lastOccurance(vector<int> &nums, int target)
    {
        int ans = -1;
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = firstOccurance(nums, target);
        int last = lastOccurance(nums, target);
        vector<int> ans = {first, last};
        return ans;
    }
};