# Exclusive Time of Functions

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-17 |
| **LeetCode** | [Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`exclusive-time-of-functions.cpp`](./exclusive-time-of-functions.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
            vector<int> res(n, 0);
    stack<int> st;
    int prev = 0;
    for (string s : logs)
    {
        int a = s.find(":");
        int b = s.find(":", a + 1);
        int id = stoi(s.substr(0, a));
        string msg = s.substr(a + 1, b - a - 1);
        int time = stoi(s.substr(b + 1));

        if (msg == "start")
        {
            if (!st.empty())
                res[st.top()] += time - prev;

            st.push(id);
            prev = time;
        }
        else
        {
            res[st.top()] += time-prev+1;
            st.pop();
            prev = time+1;
        }
    }

    return res;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
