// Rotate Image

//Question
//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

//Example
//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [[7,4,1],[8,5,2],[9,6,3]]

//Code
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        long n = matrix.size();
        for (int j=0; j * 2 < n; j++) {
            for (int i=j; i<n-1-j; i++) {
                swap(matrix[j][i], matrix[i][n-1-j]);
                swap(matrix[n-1-i][j], matrix[j][i]);
                swap(matrix[n-1-j][n-1-i], matrix[n-1-i][j]);
            }
        }
    }
};

//Time Complexity: O(n^2)
//Space Complexity: O(1)

