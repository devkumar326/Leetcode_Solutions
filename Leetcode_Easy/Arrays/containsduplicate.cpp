// Contains Duplicate

//Question
//Given an array of integers, find if the array contains any duplicates.
//Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

//Example
//Input: [1,2,3,1]
//Output: true

//Code
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
        if (size<= 1)
            return false;
        
        sort(nums.begin(), nums.end());
        for (int i=1; i<size; i++){
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};

//Time Complexity: O(NLogN)
