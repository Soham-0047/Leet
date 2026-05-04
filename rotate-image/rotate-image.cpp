// Rotate Image | Medium
// https://leetcode.com/problems/rotate-image/
// Solved: 2026-05-04
//
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n = matrix.size();

    // Step 1: Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while(left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
    }
};