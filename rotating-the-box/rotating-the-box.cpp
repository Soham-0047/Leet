// Rotating the Box | Medium
// https://leetcode.com/problems/rotating-the-box/
// Solved: 2026-05-06
//
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();

        // Step 1: Apply gravity (RIGHT direction)
        for (int i = 0; i < m; i++) {
            int empty = n - 1; // position to place next stone

            for (int j = n - 1; j >= 0; j--) {
                if (box[i][j] == '*') {
                    empty = j - 1; // reset after obstacle
                } 
                else if (box[i][j] == '#') {
                    swap(box[i][j], box[i][empty]);
                    empty--;
                }
            }
        }

        // Step 2: Rotate matrix
        vector<vector<char>> res(n, vector<char>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[j][m - 1 - i] = box[i][j];
            }
        }

        return res;
    }
};