// Given an integer array nums of length n
// where all the integers of nums are in the range [1, n] and
// each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space,
// excluding the space needed to store the output
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    vector<int> returnDuplicate(vector<int> &nums){
        vector<int> ans ;
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]==nums[i-1])
            ans.push_back(nums[i]);
        }
        return ans;
    }
};