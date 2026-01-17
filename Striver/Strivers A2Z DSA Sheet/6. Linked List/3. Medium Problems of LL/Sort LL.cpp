#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() {
        val = 0;
        next = NULL;    
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

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
    ListNode *sortList(ListNode *head) {
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = NULL, *tail = NULL;
    for(int val : nums) {
        ListNode *node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else{
            tail->next = node;
            tail = node;
        }
    }

    Solution sol;
    ListNode *curr = sol.sortList(head);

    bool first = true;
    cout << "[";
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}