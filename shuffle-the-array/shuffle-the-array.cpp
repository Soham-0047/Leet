// Shuffle the Array
// https://leetcode.com/problems/shuffle-the-array/
// Solved: 2026-03-02
//
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int k  = nums.size();
       vector<int>tmp(k);
       for(int i=0;i<k;i++){
        if(i%2 == 0){
            tmp[i] = nums[i/2];
        } else {
            tmp[i] = nums[n+(i/2)];
        }
       }

        return tmp;
    }
};