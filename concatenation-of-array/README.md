# Concatenation of Array

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-02 |
| **LeetCode** | [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`concatenation-of-array.cpp`](./concatenation-of-array.cpp) for the full solution.

```cpp
class Solution {
public:
   vector<int> getConcatenation(vector<int>& nums) {
    
    int n = nums.size();
    vector<int>tmp(2*n);
    for(int i=0;i<n;i++){
        tmp[i] = nums[i];
        tmp[n+i] = nums[i];
    }

    return tmp;
}
};
// 0 1 2    3 4 5
//
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
