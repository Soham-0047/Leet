// Subsets | Medium
// https://leetcode.com/problems/subsets/
// Solved: 2026-04-03
//
class Solution {
public:
    void calculate(vector<int>&v,vector<int>&cur, vector<vector<int>>&res, int i){
        int n= v.size();
        if(i == n){
            res.push_back(cur);
            return;
        }

        cur.push_back(v[i]);
        calculate(v,cur,res,i+1);
        cur.pop_back();
        calculate(v,cur,res,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int>cur;
        calculate(nums,cur,result,0);
        return result;
    }
};