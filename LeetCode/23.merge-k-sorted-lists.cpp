/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [] (ListNode *a, ListNode *b) 
                        {return a->val > b->val; };
        /* We define a lambda comparator cmp for the priority queue.
            It returns true if a->val > b->val. 
            In C++ priority_queue, “true” means a has lower priority than b.
So this makes the smallest value have the highest priority → min-heap behavior. */

        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> pq(cmp);

        for(ListNode *head : lists) if(head) pq.push(head);

        ListNode dummy(0);
        ListNode *tail = &dummy;

        while(!pq.empty()) {
            ListNode *node = pq.top();
            pq.pop();
            tail->next = node;
            tail = tail->next;
            if(node->next) pq.push(node->next);
        }
        return dummy.next;
    }
};
// @lc code=end

