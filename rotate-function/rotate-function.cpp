// Rotate Function | Medium
// https://leetcode.com/problems/rotate-function/
// Solved: 2026-05-01
//
class Solution {
public:
/*
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        
        long long sum = 0;
        long long F = 0;
        
        // Step 1: compute sum and F(0)
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            F += (long long)i * nums[i];
        }
        
        long long result = F;
        
        // Step 2: compute F(k) using relation
        for (int k = 1; k < n; k++) {
            F = F + sum - (long long)n * nums[n - k];
            result = max(result, F);
        }
        
        return (int)result;
    }
};
*/
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long F = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];
            F += (long long)i * nums[i];
        }

        long long res = F;
        for(int j=1;j<n;j++)
        {
            F = F + sum - (long long)n * nums[n-j];
            res = max(res,F);
        }

        return (int)res;
    }
};