// Zigzag Conversion | Medium
// https://leetcode.com/problems/zigzag-conversion/
// Solved: 2026-09-27
//
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()) return s;
        int curr = 0;
        bool down  = false;
        vector<string>v(numRows);
        for(char c: s){
            v[curr] += c;
            if(curr == 0 || curr == numRows-1) down = !down;
            curr += down ? 1 : -1;
        }
        string final;
        for(const string& c : v){
            final += c;
        }
        return final;
    }
};