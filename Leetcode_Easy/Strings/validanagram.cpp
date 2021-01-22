//Valid Anagram

//Question
//Given two strings s and t , write a function to determine if t is an anagram of s.

//Example 1:
//Input: s = "anagram", t = "nagaram"
//Output: true

//Example 2:
//Input: s = "rat", t = "car"
//Output: false

//Note:
//You may assume the string contains only lowercase alphabets.

//Follow up:
//What if the inputs contain unicode characters? How would you adapt your solution to such case?

//Code
class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        for(int i=0;i<s.length();i++)
            a[s[i]-'a']+=1;
        for(int i=0;i<t.length();i++)
            a[t[i]-'a']-=1;
        for(int i=0;i<26;i++){
            if(a[i]!=0)
                return false;
        }
        return true;
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
