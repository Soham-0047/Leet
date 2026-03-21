# Largest Rectangle in Histogram

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-21 |
| **LeetCode** | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`largest-rectangle-in-histogram.cpp`](./largest-rectangle-in-histogram.cpp) for the full solution.

```cpp
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<int> left(n), right(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();

            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int maxA = 0;

        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            maxA = max(maxA, h[i] * width);
        }

        return maxA;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
