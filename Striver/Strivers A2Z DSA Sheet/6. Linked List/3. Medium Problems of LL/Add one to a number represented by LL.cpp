#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() {
        val = 0;
        next = NULL;
    }
    ListNode(int x) {
        val = x;
        next = NULL;
    }
    ListNode(int x, ListNode *next1) {
        val = x;
        next = next1;
    }
};

class Solution {

    ListNode *reverseList(ListNode *head) {
        ListNode *prev = NULL, *curr = head;
            while(curr) {
                ListNode *temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return prev;
    };

public:
    ListNode *addOne(ListNode *head) {
        if(!head) return head;
        head = reverseList(head);

        ListNode *curr = head;
        int carry = 1;

        while(curr && carry) {
            int sum = curr->val + carry;
            curr->val = sum % 10;
            carry = sum / 10;
            if(!curr->next && carry) {
                curr->next = new ListNode(carry);
                carry = 0;
            }
            curr = curr->next;
        }
        head = reverseList(head);
        return head;
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
        nums.push_back(stoi(temp));
    }

    ListNode *head = NULL, *tail = NULL;
    for(int val : nums) {
        ListNode *node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    Solution sol;
    ListNode *curr = sol.addOne(head);

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