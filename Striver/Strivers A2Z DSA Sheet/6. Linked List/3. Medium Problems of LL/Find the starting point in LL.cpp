#include<bits/stdc++.h>
using namespace std;

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
    ListNode *findStartingPoint(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                slow = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; 
            }
        }
        return NULL;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int pos; cin >> pos;

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

    ListNode *head = NULL, *tail = NULL, *loopNode = NULL;
    for(int i=0; i<nums.size(); i++) {
        int val = nums[i];
        ListNode *node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
        if(i == pos) loopNode = node;
    }

    if(pos != -1 && tail && loopNode) tail->next = loopNode;
    Solution sol;

    ListNode *start = sol.findStartingPoint(head);
    if(!start) {
        cout << "[]";
    }
    else {
        cout << "[";
        ListNode *curr = start;
        bool first = true;
        do {
            if(!first) cout << ",";
            cout << curr->val;
            first = false;
            curr = curr->next;
        } while(curr != start); 
        cout << "]";

    }
    return 0;
}