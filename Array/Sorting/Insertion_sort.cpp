#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void insertion_sort(vector<int> &v)
    {
        for (int i = 1; i < v.size(); i++)
        {
            int key = v[i];
            int j = i - 1;
            while (j >= 0 && v[j] > key)
            {
                v[j + 1] = v[j];
                j--;
            }
            v[j + 1] = key;
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {7, 5, 3, 1, 4, 2};
    obj.insertion_sort(nums);
    cout << "[ ";
    for (int i : nums)
        cout << i << " ";
    cout << "]";
}
