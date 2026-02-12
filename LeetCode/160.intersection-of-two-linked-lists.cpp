/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;

        ListNode *walkA = headA;
        ListNode *walkB = headB;

        while(walkA != walkB) {
            walkA = walkA ? walkA->next : headB;
            walkB = walkB ? walkB->next : headA;
        }

        return walkA;
    }
};
// @lc code=end

