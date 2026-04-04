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
    void calculate(vector<int>&v,vector<int>&curr,vector<vector<int>>&ans,int i){
        int n= v.size();
        ans.push_back(curr);
        for(int j=i; j<n; j++){
            if(j > i && v[j] == v[j-1]) continue;
            curr.push_back(v[j]);
            calculate(v,curr,ans,j+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        vector<vector<int>>ans;
        calculate(nums,curr,ans,0);
        return ans;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
