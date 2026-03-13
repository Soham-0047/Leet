// Build an Array With Stack Operations
// https://leetcode.com/problems/build-an-array-with-stack-operations/
// Solved: 2026-03-13
//
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        // 1 to 3: 1 2 3
        //target = [1,3]
        int i=0;
        //  1 to n
        //  1 2 3
        //  i >= target.size() break; // 0 1 2

        vector<string>st;
        for(int j=1;j<=n;j++){
            if(i  >= target.size()) break;
            st.push_back("Push");
            if(j == target[i]) i++;
            else st.push_back("Pop");
        }

        return st;
    }
};