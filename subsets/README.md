# Subsets

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-04-03 |
| **LeetCode** | [Subsets](https://leetcode.com/problems/subsets/) |

## Tags

`Array` · `Backtracking` · `Bit Manipulation`

---

## Problem Statement

Given an integer array `nums` of **unique** elements, return *all possible* *subsets* *(the power set)*.

The solution set **must not** contain duplicate subsets. Return the solution in **any order**.

**Example 1:**

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
```

**Example 2:**

```
Input: nums = [0]
Output: [[],[0]]
```

**Constraints:**

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

---

## Solution

See [`subsets.cpp`](./subsets.cpp) for the full solution.

```cpp
class Solution {
public:
    void calculate(vector<int>&v,vector<int>&cur, vector<vector<int>>&res, int i){
        int n= v.size();
        if(i == n){
            res.push_back(cur);
            return;
        }

        cur.push_back(v[i]);
        calculate(v,cur,res,i+1);
        cur.pop_back();
        calculate(v,cur,res,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int>cur;
        calculate(nums,cur,result,0);
        return result;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
