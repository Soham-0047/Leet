// Combination Sum | Medium
// https://leetcode.com/problems/combination-sum/
// Solved: 2026-04-04
//
class Solution {
public:

    void calculateSum(vector<int>&v, vector<vector<int>>&ans, vector<int>&curr, int target, int i){
        // size of the array
        int n = v.size();
        // base case
        if(i == n){
            if(target == 0) ans.push_back(curr);
            return;
        }
        if(v[i] <= target){
            curr.push_back(v[i]);
            calculateSum(v,ans,curr,target - v[i],i);
            curr.pop_back();
        }
        calculateSum(v,ans,curr,target,i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<int>curr;
      vector<vector<int>>res;
     calculateSum(candidates,res,curr,target,0);
     return res;
    }
};