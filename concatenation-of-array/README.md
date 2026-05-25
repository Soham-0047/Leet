# Concatenation of Array

| | |
|---|---|
| **Difficulty** | 🟢 Easy |
| **Language** | Cpp |
| **Solved** | 2026-05-25 |
| **LeetCode** | [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) |

## Tags

`Array` · `Simulation`

---

## Problem Statement

Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (**0-indexed**).

Specifically, `ans` is the **concatenation** of two `nums` arrays.

Return *the array*`ans`.

**Example 1:**

```
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
```

**Example 2:**

```
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
```

**Constraints:**

- n == nums.length
- 1 <= n <= 1000
- 1 <= nums[i] <= 1000

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
            tmp[i] =  nums[i];
            tmp[i+n] = nums[i];
            // just for clean output we can do this operation one line
            tmp[i] = tmp[i+n] = nums[i];
        }

        return tmp; //O(n) and space complexity also O(n)
    }
};
// 0 1 2    3 4 5
//
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
