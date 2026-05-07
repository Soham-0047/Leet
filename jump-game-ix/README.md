# Jump Game IX

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-05-07 |
| **LeetCode** | [Jump Game IX](https://leetcode.com/problems/jump-game-ix/) |

## Tags

`Array` · `Dynamic Programming`

---

## Problem Statement

You are given an integer array `nums`.

From any index `i`, you can jump to another index `j` under the following rules:

- Jump to index j where j > i is allowed only if nums[j] < nums[i].
- Jump to index j where j < i is allowed only if nums[j] > nums[i].

For each index `i`, find the **maximum** **value** in `nums` that can be reached by following **any** sequence of valid jumps starting at `i`.

Return an array `ans` where `ans[i]` is the **maximum** **value** reachable starting from index `i`.

**Example 1:**

**Input:** nums = [2,1,3]

**Output:** [2,2,3]

**Explanation:**

- For i = 0: No jump increases the value.
- For i = 1: Jump to j = 0 as nums[j] = 2 is greater than nums[i].
- For i = 2: Since nums[2] = 3 is the maximum value in nums, no jump increases the value.

Thus, `ans = [2, 2, 3]`.

**Example 2:**

**Input:** nums = [2,3,1]

**Output:** [3,3,3]

**Explanation:**

- For i = 0: Jump forward to j = 2 as nums[j] = 1 is less than nums[i] = 2, then from i = 2 jump to j = 1 as nums[j] = 3 is greater than nums[2].
- For i = 1: Since nums[1] = 3 is the maximum value in nums, no jump increases the value.
- For i = 2: Jump to j = 1 as nums[j] = 3 is greater than nums[2] = 1.

Thus, `ans = [3, 3, 3]`.

**Constraints:**

- 1 <= nums.length <= 105
- 1 <= nums[i] <= 109​​​​​​​

---

## Solution

See [`jump-game-ix.cpp`](./jump-game-ix.cpp) for the full solution.

```cpp
class Solution {
public:
    struct Item {
        int value;
        int left;
        int right;
    };

    vector<int> maxValue(const vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        vector<Item> stack;

        for (int i = 0; i < n; ++i) {
            Item curr = {nums[i], i, i};

            while (!stack.empty() && stack.back().value > nums[i]) {
                Item top = stack.back();
                stack.pop_back();
                curr.value = max(curr.value, top.value);
                curr.left = top.left;
            }

            stack.push_back(curr);
        }

        for (size_t i = 0; i < stack.size(); ++i) {
            for (int j = stack[i].left; j <= stack[i].right; ++j) {
                ans[j] = stack[i].value;
            }
        }

        return ans;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
