// Valid Anagram | Easy
// https://leetcode.com/problems/valid-anagram/
// Solved: 2026-06-17
//
class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     if(s.length() != t.length()) return false;

    //     sort(s.begin(),s.end());
    //     sort(t.begin(), t.end());

    //     if(s == t) return true;

    //     return false;
    // }
     bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int>frq(26,0);

        for(auto i : s){
            frq[i - 'a']++;
        }
        for(auto i : t){
            frq[i - 'a']--;
        }

        for(auto mp: frq){
            if(mp != 0) return false;
        }

        return true;
    }
};