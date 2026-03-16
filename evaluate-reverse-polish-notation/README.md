# Evaluate Reverse Polish Notation

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-16 |
| **LeetCode** | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`evaluate-reverse-polish-notation.cpp`](./evaluate-reverse-polish-notation.cpp) for the full solution.

```cpp
class Solution {
public:
    int evalRPN(vector<string>& s) {
         stack<int>st;
    for(auto token : s){

        if(token == "+" || token == "-" ||  token == "/" || token == "*"){
          int a = st.top();
          st.pop();
          int b = st.top();
          st.pop();
          if(token == "+") st.push(b+a);
          else if(token == "-") st.push(b-a);
          else if(token == "*") st.push(b*a);
          else st.push(b/a);
        } else {
            st.push(stoi(token));
        }
    }
    return st.top();

    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
