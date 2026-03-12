// Find All Numbers Disappeared in an Array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Solved: 2026-03-12
//
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>tmp;
        // for(int i=1;i<=n;i++){
        //     bool f = false;
        //     for(int j=0;j<n;j++){
        //         if(nums[j] == i){
        //             f = true;
        //             break;
        //         }
        //     }

        //     if(f != true){
        //         tmp.push_back(i);
        //     }
        // }


        vector<int>fr(n+1,0);

        for(int i:nums){
            fr[i]++;
        }
        // 1 2 2 3 3 4 7 8
        // 0 0 0 0 0 0 0 0 0
        //   1 2 2 1     1

        for(int i=1; i<=n; i++){
            if(fr[i] == 0){
                tmp.push_back(i);
            }
        }

        return tmp;
    }
};