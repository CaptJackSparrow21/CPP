/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;

        for(Node *curr=head; curr;) {
            Node *copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        for(Node *curr=head; curr; curr=curr->next->next) {
            if(curr->random) {
                curr->next->random = curr->random->next;
            }
        }

        Node *copyHead = head->next;
        Node *orig = head;
        Node *copy = copyHead;

        while(orig) {
            orig->next = orig->next->next;
            copy->next = copy->next ? copy->next->next : nullptr;
            orig = orig->next;
            copy = copy->next; 
        }
        return copyHead;
    }
};
// @lc code=end

