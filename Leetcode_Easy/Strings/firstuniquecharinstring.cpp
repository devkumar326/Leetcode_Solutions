// First Unique Character in a String

//Question
//Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

//Examples
//s = "leetcode"
//return 0.
//s = "loveleetcode"
//return 2.
 
//Note: You may assume the string contains only lowercase English letters.

//Code
class Solution {
public:
    int firstUniqChar(string s) {
        for(int ind=0; ind < s.size(); ind++)
        {
            size_t pos1 = s.find(s[ind], ind+1);
            size_t pos2 = s.find(s[ind]);
            if(pos1==string::npos && pos2==ind)
            {
                return ind;
            }
        
        }
        
        return -1;
    }
};

//Time Complexity: O(N)
