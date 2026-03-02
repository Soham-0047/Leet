// Concatenation of Array
// https://leetcode.com/problems/concatenation-of-array/
// Solved: 2026-03-02
//
class Solution {
public:
   vector<int> getConcatenation(vector<int>& nums) {
    
    int n = nums.size();
    vector<int>tmp(2*n);
    for(int i=0;i<n;i++){
        tmp[i] = nums[i];
        tmp[n+i] = nums[i];
    }

    return tmp;
}
};
// 0 1 2    3 4 5
// 