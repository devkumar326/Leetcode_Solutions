// Count and Say

//Question
//The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
//countAndSay(1) = "1"
//countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.

//To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character.
//Then for each group, say the number of characters, then say the character. 
//To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

//Example
//Input: n = 1
//Output: "1"
//Explanation: This is the base case.

//Code
class Solution {
public:
    string countAndSay(int n) {
        string seq{"1"};
        for (int i = 0; i < n - 1; ++i) {
            seq = getNext(seq);
        }
        return seq;
    }
    string getNext(const string& seq) {
        string next_seq;
        for(auto i = seq.cbegin(); i != seq.cend();) {
            auto j = find_if(i, seq.cend(), bind1st(not_equal_to<char>(), *i));
            next_seq.append(to_string(distance(i, j)));
            next_seq.push_back(*i);
            i = j;
        }
        return next_seq;
    }
};

//Time Complexity: O(N* 2^N)
//Space Complexity: O(2^N)
