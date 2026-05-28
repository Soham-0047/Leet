// Contains Duplicate | Easy
// https://leetcode.com/problems/contains-duplicate/
// Solved: 2026-05-28
//
class Solution {
public:
    
    // O(N2) solution
    bool optimized1(vector<int>&v){

        int n = v.size();
        for(int i=0;i<n;i++){

            for (int j = i+1;j<n;j++){

                if(v[i] == v[j]) return true;
            }
        }

        return false;
    }

    bool optimized2(vector<int>&v){

        int n = v.size();
        
    }
    bool containsDuplicate(vector<int>& nums) {
        bool l = optimized1(nums);
        return l;
    }
};