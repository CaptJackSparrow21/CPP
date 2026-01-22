#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode() {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1) {
        val = data1;
        next = next1;
        prev = prev1;
    }
};

class Solution{
public:
    ListNode *deleteAllOccurences(ListNode *head, int target) {
        ListNode *curr = head;
        while(curr) {
            ListNode *nxt = curr->next;
            if(curr->val == target) {
                if(!curr->prev) {
                    head = curr->next;
                    if(head) head->prev = NULL;
                }
                else {
                    curr->prev->next = curr->next;
                    if(curr->next) {
                        curr->next->prev = curr->prev;
                    }
                }
                delete curr;
            }
            curr = nxt;
        }
        return head;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int target; cin >> target;
    
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
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
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    Solution sol;
    ListNode *curr = sol.deleteAllOccurences(head, target);

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