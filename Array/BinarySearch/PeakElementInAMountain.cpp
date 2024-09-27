#include <vector>
#include <iostream>
using namespace std;
// [24,69,100,99,79,78,67,36,26,19]
class Solution
{
public:
    int peakElement(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] < nums[mid + 1])
                start = mid + 1;
            elses
                end = mid;
        }
        return nums[start];
    }
};
int main()
{
    vector<int> nums = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    Solution obj;
    cout << obj.peakElement(nums);
}
// 1st iteration s = 0 , e = 9 , cond (true)
// mid = 4
// if nums[4] < nums[5] --> 79 < 78 false
// else end = 4 ;

// 2nd Iteration s = 0 , e = 4 , cond (true)
// mid = 2
// if nums[2] < nums[3] --> 100 < 99 false
// else end = 2

// 3rd iteration s = 0 , e = 2 , cond (true)
// mid = 1
// if nums[1] < nums[2] --> 69 < 100 true
// start = 2

// Loop breaks becoz the cond s < e is false i.e  2 < 2.