# Rotate String

| | |
|---|---|
| **Difficulty** | 🟢 Easy |
| **Language** | Cpp |
| **Solved** | 2026-05-03 |
| **LeetCode** | [Rotate String](https://leetcode.com/problems/rotate-string/) |

## Tags

`String` · `String Matching`

---

## Problem Statement

Given two strings `s` and `goal`, return `true` *if and only if* `s` *can become* `goal` *after some number of **shifts** on* `s`.

A **shift** on `s` consists of moving the leftmost character of `s` to the rightmost position.

- For example, if s = "abcde", then it will be "bcdea" after one shift.

**Example 1:**

```
Input: s = "abcde", goal = "cdeab"
Output: true
```

**Example 2:**

```
Input: s = "abcde", goal = "abced"
Output: false
```

**Constraints:**

- 1 <= s.length, goal.length <= 100
- s and goal consist of lowercase English letters.

---

## Solution

See [`rotate-string.cpp`](./rotate-string.cpp) for the full solution.

```cpp
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
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
