# Group Anagrams

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-06-15 |
| **LeetCode** | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) |

## Tags

`Array` · `Hash Table` · `String` · `Sorting`

---

## Problem Statement

Given an array of strings `strs`, group the anagrams together. You can return the answer in **any order**.

**Example 1:**

**Input:** strs = ["eat","tea","tan","ate","nat","bat"]

**Output:** [["bat"],["nat","tan"],["ate","eat","tea"]]

**Explanation:**

- There is no string in strs that can be rearranged to form "bat".
- The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
- The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

**Example 2:**

**Input:** strs = [""]

**Output:** [[""]]

**Example 3:**

**Input:** strs = ["a"]

**Output:** [["a"]]

**Constraints:**

- 1 <= strs.length <= 104
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

---

## Solution

See [`group-anagrams.cpp`](./group-anagrams.cpp) for the full solution.

```cpp
class Solution {
public:


bool checkAnagram(string a, string b){
    if(a.length() != b.length()) return false;

    sort(a.begin(),a.end());
    sort(b.begin(), b.end());

    return a==b;
}
    vector<vector<string>> groupAnagrams(vector<string>& v) {
           int n =  v.size();
    vector<bool>vis (n, false);

    vector<vector<string>>result;

    for(int i=0;i<n;i++){
        
        if(vis[i]) continue;

        vector<string>tmp;

        tmp.push_back(v[i]);

        vis[i] =  true;

        for(int j=i+1;j<n;j++){

            if(!vis[j] && checkAnagram(v[i], v[j])){
                tmp.push_back(v[j]);
                vis[j] =  true;
            }
        }

        result.push_back(tmp);
    }

    return result; 
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
