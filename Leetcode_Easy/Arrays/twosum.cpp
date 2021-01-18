// Two Sum

//Question
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

//Example
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Output: Because nums[0] + nums[1] == 9, we return [0, 1].

//Code
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++)
        {
            auto iter = umap.find(target - nums[i]);
            if (iter == umap.end())
            {
                umap[nums[i]] = i;
            }
            else
            {
                return { iter->second, i };
            }
        }

        return { 0, 0 };
    }
};

//Time Complexity: O(N)

