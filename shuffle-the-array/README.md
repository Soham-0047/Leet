# Shuffle the Array

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-02 |
| **LeetCode** | [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`shuffle-the-array.cpp`](./shuffle-the-array.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int k  = nums.size();
       vector<int>tmp(k);
       for(int i=0;i<k;i++){
        if(i%2 == 0){
            tmp[i] = nums[i/2];
        } else {
            tmp[i] = nums[n+(i/2)];
        }
       }

        return tmp;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
