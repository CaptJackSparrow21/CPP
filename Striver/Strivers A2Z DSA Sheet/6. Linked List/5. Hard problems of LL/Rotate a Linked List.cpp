#include<bits/stdc++.h>
using namespace std;

struct ListNode{
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
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if(!head || !head->next || k == 0) return head;
        int n = 1;
        ListNode *tail = head;
        while(tail->next) {
            tail = tail->next;
            n++;
        }

        k = k % n;
        if(k == 0) return head;

        tail->next = head;
        int steps = n - k - 1; 
        /* by looking ex. we can say that let n = length of list,
        head will be of position n - k (0-based) & 
        tail will be n - k - 1;  */
        ListNode *newTail = head;
        while(steps--) {
            newTail = newTail->next;
        }

        ListNode *newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
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
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = NULL, *tail = NULL ;
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
    ListNode *curr = sol.rotateRight(head, k);

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