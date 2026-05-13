// Maximum Number of Jumps to Reach the Last Index | Medium
// https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
// Solved: 2026-05-13
//
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int  n = nums.size();
        vector<int>dp(n,INT_MIN);
        dp[0] = 0;
        for(int i=1;i<n;i++){

            for(int j=0;j<i;j++){

                if(dp[j] != INT_MIN && abs(nums[i] - nums[j]) <= target){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        
        return (dp[n-1] == INT_MIN) ? -1 : dp[n-1];
    }
};