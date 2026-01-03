/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr = new ListNode(0);
        ListNode* tail = curr;

        int carry = 0;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1 != nullptr || p2 != nullptr || carry != 0) {
            int x = (p1 ? p1->val : 0);
            int y = (p2 ? p2->val : 0);

            int sum = x + y + carry;
            int digit = sum % 10;
            carry = sum / 10;

            tail->next = new ListNode(digit);
            tail = tail->next;

            if(p1) p1 = p1->next;
            if(p2) p2 = p2->next;

        }
        ListNode* head = curr->next;
        delete curr;
        return head;
    }
};
// @lc code=end

