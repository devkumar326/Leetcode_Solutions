// Longest Common Prefix

//Question
//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

//Example
//Input: strs = ["flower","flow","flight"]
//Output: "fl"

//Constraints
//0 <= strs.length <= 200
//0 <= strs[i].length <= 200
//strs[i] consists of only lower-case English letters.

//Code
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        for (int i = 0; i < strs[0].length(); ++i) {
            for (const auto& str : strs) {
                if (i >= str.length() || str[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

//Time Complexity: O(N*K)
//Space Complexity: O(1)
