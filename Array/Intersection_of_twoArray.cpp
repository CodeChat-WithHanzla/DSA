// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order.
// You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

#include <iostream>
#include <climits>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums2[j] > nums1[i])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else
            {
                ans.push_back(nums1[i]);
                nums2[j] = INT_MIN;
                j++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int> nums1 = {4, 5, 7, 9};
    vector<int> nums2 = {5, 6, 7, 8, 5};
    vector<int> res = obj.intersection(nums1, nums2);
    for (int ans : res)
        cout << ans << " ";
}