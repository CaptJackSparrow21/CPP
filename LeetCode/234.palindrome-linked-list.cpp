/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
ListNode *reverseList(ListNode *head) {
    ListNode *prev = nullptr, *curr = head;
    while(curr) {
        ListNode *node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = node;
    }
    return prev;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *second = reverseList(slow->next);
        ListNode *p1 = head, *p2 = second;
        bool ok = true;
        while(p2) {
            if(p1->val != p2->val) {
                ok = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return ok;
    }
};
// @lc code=end

