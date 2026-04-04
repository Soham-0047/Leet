# Subsets II

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-04-04 |
| **LeetCode** | [Subsets II](https://leetcode.com/problems/subsets-ii/) |

## Tags

`Array` · `Backtracking` · `Bit Manipulation`

---

## Problem Statement

Given an integer array `nums` that may contain duplicates, return *all possible* *subsets**(the power set)*.

The solution set **must not** contain duplicate subsets. Return the solution in **any order**.

**Example 1:**

```
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
```

**Example 2:**

```
Input: nums = [0]
Output: [[],[0]]
```

**Constraints:**

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10

---

## Solution

See [`subsets-ii.cpp`](./subsets-ii.cpp) for the full solution.

```cpp
class Solution {
public:

    void calculateSum(vector<int>&v, vector<vector<int>>&ans, vector<int>&curr, int target, int i){
        // size of the array
        int n = v.size();
        // base case
        if(i == n){
            if(target == 0) ans.push_back(curr);
            return;
        }
        if(v[i] <= target){
            curr.push_back(v[i]);
            calculateSum(v,ans,curr,target - v[i],i);
            curr.pop_back();
        }
        calculateSum(v,ans,curr,target,i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<int>curr;
      vector<vector<int>>res;
     calculateSum(candidates,res,curr,target,0);
     return res;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
