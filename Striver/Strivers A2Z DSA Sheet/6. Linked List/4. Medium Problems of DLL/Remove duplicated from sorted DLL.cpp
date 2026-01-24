#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next, *prev;
    ListNode() {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int x) {
        val = x;
        next = NULL;
        prev = NULL;
    }
    ListNode(int x, ListNode *next1, ListNode *prev1) {
        val = x;
        next = next1;
        prev = prev1;
    }
};

class Solution {
public:
    ListNode *removeDuplicates(ListNode *head) {
        if(!head) return head;
        ListNode *curr = head;
        while(curr && curr->next) {
            if(curr->val == curr->next->val) {
                ListNode *dup = curr->next;
                curr->next = dup->next;
                if(dup->next) dup->next->prev = curr;
                delete dup;
            }
            else {
                curr = curr->next;
            }
        }
        return head;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['),input.end());
    input.erase(remove(input.begin(), input.end(), ']'),input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = NULL, *tail = NULL, *prev = NULL;
    for(int val : nums) {
        ListNode *node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    Solution sol;
    ListNode *curr = sol.removeDuplicates(head);

    bool first = true;
    cout << "[";
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr = curr->next;
    }
    cout << "]" << endl;

    return 0;
}