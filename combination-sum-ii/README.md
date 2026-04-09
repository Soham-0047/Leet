# Combination Sum II

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-04-09 |
| **LeetCode** | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) |

## Tags

`Array` · `Backtracking`

---

## Problem Statement

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used **once** in the combination.

**Note:** The solution set must not contain duplicate combinations.

**Example 1:**

```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
```

**Example 2:**

```
Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
```

**Constraints:**

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

---

## Solution

See [`combination-sum-ii.cpp`](./combination-sum-ii.cpp) for the full solution.

```cpp
class Solution {
public:
    void finCombination(vector<int>&v, vector<int>&curr, vector<vector<int>>&res, int t, int i){

        if(t == 0){
            res.push_back(curr);
            return;
        }

        for(int j = i; j<v.size(); j++){

            if(j>i && v[j] == v[j-1]) continue;

            if(v[j] > t) break;

            curr.push_back(v[j]);

            finCombination(v,curr, res, t-v[j], j+1);

            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>curr;
        finCombination(candidates, curr, res, target, 0);

        return res;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
