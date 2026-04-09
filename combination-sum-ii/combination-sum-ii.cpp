// Combination Sum II | Medium
// https://leetcode.com/problems/combination-sum-ii/
// Solved: 2026-04-09
//
class Solution {
public:
    void finCombination(vector<int>&v, vector<int>&curr, vector<vector<int>>&res, int t, int i){

        if(t == 0){
            res.push_back(curr);
            return;
        }

        for(int j = i; j<v.size(); j++){

            if(j>i && v[j] == v[j-1]) continue;

            if(v[j] > t) break;

            curr.push_back(v[j]);

            finCombination(v,curr, res, t-v[j], j+1);

            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>curr;
        finCombination(candidates, curr, res, target, 0);

        return res;
    }
};