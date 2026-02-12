#include<bits/stdc++.h>
using namespace std;

//definition of SLL
struct ListNode {
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
public:
    ListNode *reverseList(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *prev = NULL;
        ListNode *curr = head;
        while(curr != NULL) {
            ListNode *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
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
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = NULL;
    ListNode *tail = NULL;
    for(int i=0; i<nums.size(); i++) {
        int val = nums[i];
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
    head = sol.reverseList(head);

    cout << "[";
    ListNode *curr = head;
    bool first = true;
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}