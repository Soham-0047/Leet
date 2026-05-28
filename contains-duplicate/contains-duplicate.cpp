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

    // O(nlogn) and s.c based on the sorting technique
    bool optimized2(vector<int>&v){

        int n = v.size();
        sort(v.begin(),v.end());

        for(int i=1;i<n;i++){
            if(v[i-1] == v[i]) return true;
        }

        return false;
    }

    bool optimized3(vector<int>&v){
        int n = v.size();
        unordered_set<int>s;
        for(auto it: v){
            if(s.count(it)) return true;

            s.insert(it);
        }

        return false;
    }
    bool containsDuplicate(vector<int>& nums) {
        bool l = optimized3(nums);
        return l;
    }
};