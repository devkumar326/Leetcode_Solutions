//Single Number

//Question
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

//Example
//Input: nums = [4,1,2,1,2]
//Output: 4

//Code
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int a=0;
        for(int i=0; i<n; i++) {
            a ^= nums[i];
        }
        return a;
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
