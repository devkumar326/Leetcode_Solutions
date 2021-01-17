// Move Zeroes

//Question
//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Example
//Input: [0,1,0,3,12]
//Output: [1,3,12,0,0]

//Note
//You must do this in-place without making a copy of the array.
//Minimize the total number of operations.

//Code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast = 0, slow = 0;
        for(; fast < nums.size(); fast++){
            if(nums[fast]){
                nums[slow++] = nums[fast];
            }
        }
        
        for(; slow < nums.size(); slow++){
            nums[slow] = 0;
        }
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
