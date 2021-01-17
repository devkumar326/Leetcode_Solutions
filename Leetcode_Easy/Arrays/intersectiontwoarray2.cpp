// Intersection of Two Arrays II

//Question
//Given two arrays, write a function to compute their intersection.

//Follow up
//What if the given array is already sorted? How would you optimize your algorithm?
//What if nums1's size is small compared to nums2's size? Which algorithm is better?
//What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

//Example
//Input: nums1 = [1,2,2,1], nums2 = [2,2]
//Output: [2,2]

//Code
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> lookup;
        for (const auto& i : nums1) {
            ++lookup[i];
        }

        vector<int> result;
        for (const auto& i : nums2) {
            if (lookup[i] > 0) {
                result.emplace_back(i);
                --lookup[i];
            }
        }

        return result;
    }
};


// If the given array is not sorted and the memory is unlimited:
//   - Time Complexity:  O(m + n)
//   - Space Complexity: O(min(m, n))
// elif the given array is already sorted:
//   if m << n or m >> n:
//     - Time Complexity:  O(min(m, n) * log(max(m, n)))
//     - Space Complexity: O(1)
//   else:
//     - Time Complexity:  O(m + n)
//     - Space Complexity: O(1)
// else: (the given array is not sorted and the memory is limited)
//     - Time Complexity:  O(max(m, n) * log(max(m, n)))
//     - Space Complexity: O(1)

// If the given array is not sorted and the memory is unlimited.
// Time Complexity:  O(m + n)
// Space Complexity: O(min(m, n))
