# Contains Duplicate

| | |
|---|---|
| **Difficulty** | 🟢 Easy |
| **Language** | Cpp |
| **Solved** | 2026-05-28 |
| **LeetCode** | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) |

## Tags

`Array` · `Hash Table` · `Sorting`

---

## Problem Statement

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

**Example 1:**

**Input:** nums = [1,2,3,1]

**Output:** true

**Explanation:**

The element 1 occurs at the indices 0 and 3.

**Example 2:**

**Input:** nums = [1,2,3,4]

**Output:** false

**Explanation:**

All elements are distinct.

**Example 3:**

**Input:** nums = [1,1,1,3,3,4,3,2,4,2]

**Output:** true

**Constraints:**

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

---

## Solution

See [`contains-duplicate.cpp`](./contains-duplicate.cpp) for the full solution.

```cpp
class Solution {
public:
    
    // O(N2) solution
    bool optimized1(vector<int>&v){

        int n = v.size();
        for(int i=0;i<n;i++){

            for (int j = i+1;j<n;j++){

                if(v[i] == v[j]) return true;
            }
        }

        return false;
    }

    bool optimized2(vector<int>&v){

        int n = v.size();
        sort(v.begin(),v.end());

        for(int i=1;i<v.size(),i++){
            if(v[i-1] == v[i]) return true;
        }

        return false;
    }
    bool containsDuplicate(vector<int>& nums) {
        bool l = optimized1(nums);
        return l;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
