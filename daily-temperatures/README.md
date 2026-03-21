# Daily Temperatures

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-21 |
| **LeetCode** | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`daily-temperatures.cpp`](./daily-temperatures.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>ans(n,0);
        // for(int i=0;i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         if(temperatures[j] > temperatures[i]){
        //             ans[i] = j-i;
        //             break;
        //         }
        //     }
        // }
        stack<int>st;
        // 73
        for(int i=0;i<n;i++)
        {
            while(!st.empty() &&  temp[i] > temp[st.top()]){
                int prevIndex = st.top(); 
                st.pop();
                ans[prevIndex] = i - prevIndex;
            }

            st.push(i); // 2 3 4 5 
        }

        return ans;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
