# Valid Anagram

| | |
|---|---|
| **Difficulty** | 🟢 Easy |
| **Language** | Cpp |
| **Solved** | 2026-06-17 |
| **LeetCode** | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) |

## Tags

`Hash Table` · `String` · `Sorting`

---

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

**Example 1:**

**Input:** s = "anagram", t = "nagaram"

**Output:** true

**Example 2:**

**Input:** s = "rat", t = "car"

**Output:** false

**Constraints:**

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

**Follow up:** What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

---

## Solution

See [`valid-anagram.cpp`](./valid-anagram.cpp) for the full solution.

```cpp
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
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
