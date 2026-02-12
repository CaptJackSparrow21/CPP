/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
 */

// @lc code=start
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

ListNode *mergeLists(ListNode *a, ListNode *b) {
    ListNode dummy(0);
    ListNode *tail = &dummy;
    while(a && b) {
        if(a->val <= b->val) {
            tail->next = a;
            a = a->next;
        }
        else {
            tail->next = b;
            b = b->next;
        }

        tail = tail->next;
    }

    tail->next = a ? a : b;
    return dummy.next;
}

public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *slow = head, *fast = head, *prev = NULL;

        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }    

        prev->next = NULL;

        ListNode *left = sortList(head);
        ListNode *right = sortList(slow);

        return mergeLists(left, right);
    }
};
// @lc code=end

