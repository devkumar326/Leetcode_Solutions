// Rotate Array

//Question
//Given an array, rotate the array to the right by k steps, where k is non-negative.

//Example
//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]
//Explanation:
//            rotate 1 steps to the right: [7,1,2,3,4,5,6]
//            rotate 2 steps to the right: [6,7,1,2,3,4,5]
//            rotate 3 steps to the right: [5,6,7,1,2,3,4]

//Code
class Solution {
public:
    void reverse(vector<int>& num, int low, int high) {
        while(low<high){
            swap(num[low], num[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};

//Time Complexity: O(N)
