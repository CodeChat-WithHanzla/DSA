#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void Bubble_sort(vector<int> &nums)
    {
        bool flag;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                    swap(nums[j], nums[j + 1]);
                flag = true;
            }
            if (!flag)
                break;
        }
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {5, 3, 4, 2, 7, 1};
    obj.Bubble_sort(nums);
    cout << "[ ";
    for (int i : nums)
        cout << i << " ";
    cout << "]";
}