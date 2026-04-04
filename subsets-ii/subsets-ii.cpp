// Subsets II | Medium
// https://leetcode.com/problems/subsets-ii/
// Solved: 2026-04-04
//
class Solution {
public:
    void calculate(vector<int>&v,vector<int>&curr,vector<vector<int>>&ans,int i){
        int n= v.size();
        ans.push_back(curr);
        for(int j=i; j<n; j++){
            if(j > i && v[j] == v[j-1]) continue;
            curr.push_back(v[j]);
            calculate(v,curr,ans,j+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        vector<vector<int>>ans;
        calculate(nums,curr,ans,0);
        return ans;
    }
};