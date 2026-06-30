# Majority Element

| | |
|---|---|
| **Difficulty** | 🟢 Easy |
| **Language** | Cpp |
| **Solved** | 2026-06-30 |
| **LeetCode** | [Majority Element](https://leetcode.com/problems/majority-element/) |

## Tags

`Array` · `Hash Table` · `Divide and Conquer` · `Sorting` · `Counting`

---

## Problem Statement

Given an array `nums` of size `n`, return *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

**Example 1:**

```
Input: nums = [3,2,3]
Output: 3
```

**Example 2:**

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

**Constraints:**

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

**Follow-up:** Could you solve the problem in linear time and in `O(1)` space?

---

## Solution

See [`majority-element.cpp`](./majority-element.cpp) for the full solution.

```cpp
class Solution {
public:
    int majorityElement(vector<int>& v) {
        // unordered_map<int,int> mp;
        // int n = nums.size();
        // if(n<=0) return 0;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(const auto &i : mp){
        //     if(i.second > n/2){
        //         return i.first;
        //     }
        // }
        // return 0;
        int n=  v.size();

    int element = 0;
    int ref = 0;

    for(int i=0;i<n;i++){
        if(ref == 0){
            element = v[i];
        }

        ref += (element == v[i]) ? 1 : -1;
    }
    return element;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
