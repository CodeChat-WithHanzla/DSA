#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int binarySearch(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
            
        }
        return -1;
    }
};
