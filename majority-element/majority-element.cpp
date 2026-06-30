// Majority Element | Easy
// https://leetcode.com/problems/majority-element/
// Solved: 2026-06-30
//
class Solution {
public:
    int majorityElement(vector<int>& v) {
        // unordered_map<int,int> mp;
        // int n = nums.size();
        // if(n<=0) return 0;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(const auto &i : mp){
        //     if(i.second > n/2){
        //         return i.first;
        //     }
        // }
        // return 0;
        int n=  v.size();

    int element = 0;
    int ref = 0;

    for(int i=0;i<n;i++){
        if(ref == 0){
            element = v[i];
        }

        ref += (element == v[i]) ? 1 : -1;
    }
    return element;
    }
};