# Final Prices With a Special Discount in a Shop

| | |
|---|---|
| **Difficulty** | ⚪ Unknown |
| **Language** | Cpp |
| **Solved** | 2026-03-18 |
| **LeetCode** | [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/) |

## Tags

_No tags extracted_

---

## Problem Statement

_Problem description unavailable._

---

## Solution

See [`final-prices-with-a-special-discount-in-a-shop.cpp`](./final-prices-with-a-special-discount-in-a-shop.cpp) for the full solution.

```cpp
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       // prices the list
       //8 4 6 2 3
       int n = prices.size();
    vector<int>fp(n);
    for(int i=0;i<n;i++){
        fp[i] = prices[i]; //default ones
        for(int j = i+1;j<n;j++){
            if(prices[j] <= prices[i]){
                fp[i] = (prices[i] - prices[j]);
                break;
            }
        }
    }

    return fp;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
