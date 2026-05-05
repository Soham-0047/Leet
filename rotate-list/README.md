# Rotate List

| | |
|---|---|
| **Difficulty** | 🟡 Medium |
| **Language** | Cpp |
| **Solved** | 2026-05-05 |
| **LeetCode** | [Rotate List](https://leetcode.com/problems/rotate-list/) |

## Tags

`Linked List` · `Two Pointers`

---

## Problem Statement

Given the `head` of a linked list, rotate the list to the right by `k` places.

**Example 1:**

```
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
```

**Example 2:**

```
Input: head = [0,1,2], k = 4
Output: [2,0,1]
```

**Constraints:**

- The number of nodes in the list is in the range [0, 500].
- -100 <= Node.val <= 100
- 0 <= k <= 2 * 109

---

## Solution

See [`rotate-list.cpp`](./rotate-list.cpp) for the full solution.

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find length
        int n = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: Optimize k
        k = k % n;
        if (k == 0) return head;

        // Step 3: Make circular
        tail->next = head;

        // Step 4: Find new tail
        int stepsToNewTail = n - k - 1;
        ListNode* newTail = head;

        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 5: Break circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
