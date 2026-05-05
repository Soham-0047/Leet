// Rotate List | Medium
// https://leetcode.com/problems/rotate-list/
// Solved: 2026-05-05
//
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