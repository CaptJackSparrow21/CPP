#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode *prev;
    ListNode *next;
    ListNode() : data(0), next(nullptr), prev(nullptr) {}
    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
    ListNode(int val, ListNode *prev, ListNode *next) :
        data(val), prev(prev), next(next) {}
};

class Solution {
public:
    ListNode *reverseDLL(ListNode *head) {
        if(head == nullptr) return head;
        ListNode *curr = head;
        ListNode *last = nullptr;

        while(curr != nullptr) {
            last = curr;

            ListNode *temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }
        return last;
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

    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    for(int i=0; i<nums.size(); i++) {
        int val = nums[i];
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
    head = sol.reverseDLL(head);

    cout << "[";
    ListNode *curr = head;
    bool first = true;
    while(curr) {
        if(!first) cout << ",";
        cout << curr->data;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}