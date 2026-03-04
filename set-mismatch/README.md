# Set Mismatch

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-04 |
| **LeetCode** | [Set Mismatch](https://leetcode.com/problems/set-mismatch/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`set-mismatch.cpp`](./set-mismatch.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int ci = nums[i]-1;
            if(nums[i] != nums[ci]){
                swap(nums[i],nums[ci]);
            }
            else {
                i++;
            }
        }
        for(int i=0;i<n;i++){
          if(nums[i] != i+1){
            return {nums[i],i+1};
          }  
        }

        return {};
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
