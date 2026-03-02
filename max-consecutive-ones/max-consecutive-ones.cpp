// Max Consecutive Ones
// https://leetcode.com/problems/max-consecutive-ones/
// Solved: 2026-03-02
//
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max =0;
        int count =0;

        for(int i=0;i<nums.size();i++){
         if(nums[i] == 1){
            count++;
            if(max<count){
                max = count;
            }
         } else {
            count =0;
         }
        }
        return max;
    }
};