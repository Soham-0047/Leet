// How Many Numbers Are Smaller Than the Current Number
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Solved: 2026-03-05
//
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        // vector<int>tmp(n);
        // for(int i=0;i<n;i++){
        //     int count = 0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j] < nums[i]){
        //             count++;
        //         }
        //     }

        //     tmp[i] = count;
        // }
        // return tmp;

        // first create a sorted array
        // With T.C = O(nlogn)
        vector<int>sortArray = nums;
        sort(sortArray.begin(), sortArray.end());

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            if(mp.find(sortArray[i])  == mp.end()){
                mp[sortArray[i]] = i;
            }
        }

        vector<int>ans;

        for(int num: nums){
            ans.push_back(mp[num]);
        }

        return ans;
    }
};