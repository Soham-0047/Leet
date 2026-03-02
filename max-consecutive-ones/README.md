# Max Consecutive Ones

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-02 |
| **LeetCode** | [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`max-consecutive-ones.cpp`](./max-consecutive-ones.cpp) for the full solution.

```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max =0;
        int count =0;

        for(int i=0;i<nums.size();i++){
         if(nums[i] == 1){
            count++;
            if(max<count){
                max = count;
            }
         } else {
            count =0;
         }
        }
        return max;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
