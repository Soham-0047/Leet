class Solution {
public:
   vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> tmp(2 * n);

    for(int i = 0; i < n; i++) {
        tmp[i] = nums[i];
        tmp[i + n] = nums[i];
    }

    return tmp;
}
};
// 0 1 2    3 4 5
// 