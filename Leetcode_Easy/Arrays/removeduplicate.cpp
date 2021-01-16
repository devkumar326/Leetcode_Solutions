// Remove Duplicates from Sorted Array

//Question
//Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//Example
//Input: nums = [1,1,2]
//Output: 2, nums = [1,2]
//Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.

//Code:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0){
            return 0;
        }
        int i=0;
        for (int j=1; j<nums.size(); j++) {
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
