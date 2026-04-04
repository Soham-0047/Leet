# Combination Sum

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-04-04 |
| **LeetCode** | [Combination Sum](https://leetcode.com/problems/combination-sum/) |

## Tags

`Array` · `Backtracking`

---

## Problem Statement

Given an array of **distinct** integers `candidates` and a target integer `target`, return *a list of all **unique combinations** of*`candidates`*where the chosen numbers sum to*`target`*.* You may return the combinations in **any order**.

The **same** number may be chosen from `candidates` an **unlimited number of times**. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

**Example 1:**

```
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
```

**Example 2:**

```
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
```

**Example 3:**

```
Input: candidates = [2], target = 1
Output: []
```

**Constraints:**

- 1 <= candidates.length <= 30
- 2 <= candidates[i] <= 40
- All elements of candidates are distinct.
- 1 <= target <= 40

---

## Solution

See [`combination-sum.cpp`](./combination-sum.cpp) for the full solution.

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
