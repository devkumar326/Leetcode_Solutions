// Reverse Integer

//Question
//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

//Example
//Input: x = 123
//Output: 321

//Code
#include<cmath>
class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x!=0)
        {
            int r = x%10;
            if ( y<INT_MIN/10 || (y==INT_MIN/10 && r<INT_MIN%10) )
                return 0;
            if ( y>INT_MAX/10 || (y==INT_MAX/10 && r>INT_MAX%10) )
                return 0;
            y=y*10+r;
            x=(x-r)/10;
        }
        return y;
    }
};

//Time Complexity: O(N)
