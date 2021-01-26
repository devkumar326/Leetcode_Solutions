// Implement strStr()

//Question
//Implement strStr().
//Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

//Clarification
//What should we return when needle is an empty string? This is a great question to ask during an interview.
//For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

//Example
//Input: haystack = "hello", needle = "ll"
//Output: 2

//Code
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        return KMP(haystack, needle);
    }
    int KMP(const string& text, const string& pattern) {
        const vector<int> prefix = getPrefix(pattern);
        int j = -1;
        for (int i = 0; i < text.length(); ++i) {
            while (j > -1 && pattern[j + 1] != text[i]) {
                j = prefix[j];
            }
            if (pattern[j + 1] == text[i]) {
                ++j;
            }
            if (j == pattern.length() - 1) {
                return i - j;
            }
        }
        return -1;
    }
    vector<int> getPrefix(const string& pattern) {
        vector<int> prefix(pattern.length(), -1);
        int j = -1;
        for (int i = 1; i < pattern.length(); ++i) {
            while (j > -1 && pattern[j + 1] != pattern[i]) {
                j = prefix[j];
            }
            if (pattern[j + 1] == pattern[i]) {
                ++j;
            }
            prefix[i] = j;
        }
        return prefix;
    }
};

//Time Complexity: O(N+K)
//SPace Complexity: O(K)
