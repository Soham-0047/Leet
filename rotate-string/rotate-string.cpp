// Rotate String | Easy
// https://leetcode.com/problems/rotate-string/
// Solved: 2026-05-03
//
class Solution {
public:
   bool rotateString(string s, string goal) {
        // Step 1: Length check
        if (s.length() != goal.length()) return false;
        
        // Step 2: Check if goal is substring of s+s
        string temp = s + s;
        
        return temp.find(goal) != string::npos;
    }
};