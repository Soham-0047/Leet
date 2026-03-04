// Set Mismatch
// https://leetcode.com/problems/set-mismatch/
// Solved: 2026-03-04
//
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int ci = nums[i]-1;
            if(nums[i] != nums[ci]){
                swap(nums[i],nums[ci]);
            }
            else {
                i++;
            }
        }
        for(int i=0;i<n;i++){
          if(nums[i] != i+1){
            return {nums[i],i+1};
          }  
        }

        return {};
    }
};