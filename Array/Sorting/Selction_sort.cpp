#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void Selection_sort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            if (minIndex != i)
                swap(nums[i], nums[minIndex]);
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5, 7};
    obj.Selection_sort(nums);
    cout << "[ ";
    for (int i : nums)
        cout << i << " ";
    cout << "]";
}
