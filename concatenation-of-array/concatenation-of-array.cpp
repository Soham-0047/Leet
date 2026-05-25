// Concatenation of Array | Easy
// https://leetcode.com/problems/concatenation-of-array/
// Solved: 2026-05-25
//
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>tmp(2*n);
        for(int i=0;i<n;i++){
            tmp[i] =  nums[i];
            tmp[i+n] = nums[i];
            // just for clean output we can do this operation one line
            tmp[i] = tmp[i+n] = nums[i];
        }

        return tmp; //O(n) and space complexity also O(n)
    }
};
// 0 1 2    3 4 5
//