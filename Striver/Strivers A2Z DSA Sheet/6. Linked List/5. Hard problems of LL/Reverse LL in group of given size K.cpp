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

class Solution{
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(!head || k <= 1) return head;

        ListNode dummy(0); // here dummy is an object and not a pointer
        dummy.next = head; 
        ListNode *groupPrev = &dummy;

        while(true) {
            ListNode *kth = groupPrev;
            for(int i=0; i<k && kth; i++) {
                kth = kth->next;
            }
            if(!kth) break;

            ListNode *groupNext = kth->next;

            ListNode *prev = groupNext;
            ListNode *curr = groupPrev->next;

            while(curr != groupNext) {
                ListNode *nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }

            ListNode *temp = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = temp;
        }
        return dummy.next;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int k; cin >> k;

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
            tail = node;
        }
    }

    Solution sol;
    ListNode *curr = sol.reverseKGroup(head, k);

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