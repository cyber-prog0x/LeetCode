/*
Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indies;
        for(int i=0; i < nums.size(); ++i)
            indies[nums[i]] = i;
        
        for(int i=0; i < nums.size(); ++i) {
            int left = target - nums[i];
            if(indies.count(left) && indies[left] != i) {
                return {i, indies[left]};
            }
        }
        
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i < nums.size(); ++i) {
            for(int j=i+1; j < nums.size(); ++j) {
                int sum = nums[i] + nums[j];
                if(sum == target) {
                    return {i, j};
                }
            }
        }
        
        return {};
    }
}

// https://www.mkernel.com/2020/04/21/leetcode%e5%88%b7%e9%a2%98-two-sum/