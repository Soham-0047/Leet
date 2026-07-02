// Majority Element II | Medium
// https://leetcode.com/problems/majority-element-ii/
// Solved: 2026-07-02
//
class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
         int n = v.size();
    unordered_map<int,int>mp;
    vector<int>tmp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(const auto &i : mp){
        if(i.second > n/3){
            tmp.push_back(i.first);
        }
    }

    return tmp;
    }
};