# Majority Element II

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-07-02 |
| **LeetCode** | [Majority Element II](https://leetcode.com/problems/majority-element-ii/) |

## Tags

`Array` · `Hash Table` · `Sorting` · `Counting`

---

## Problem Statement

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

**Example 1:**

```
Input: nums = [3,2,3]
Output: [3]
```

**Example 2:**

```
Input: nums = [1]
Output: [1]
```

**Example 3:**

```
Input: nums = [1,2]
Output: [1,2]
```

**Constraints:**

- 1 <= nums.length <= 5 * 104
- -109 <= nums[i] <= 109

**Follow up:** Could you solve the problem in linear time and in `O(1)` space?

---

## Solution

See [`majority-element-ii.cpp`](./majority-element-ii.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
         int n = v.size();
    unordered_map<int,int>mp;
    vector<int>tmp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(const auto &i : mp){
        if(i.second > n/3){
            tmp.push_back(i.first);
        }
    }

    return tmp;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
