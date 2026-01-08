#include<bits/stdc++.h>
using namespace std;

//definition of LL
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
    ListNode *middleOfLinkedList(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;       
        }
        return slow;
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
        int data = nums[i];
        ListNode *node = new ListNode(data);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    Solution sol;
    head = sol.middleOfLinkedList(head);

    cout << "[";
    bool first = true;
    ListNode *curr = head;
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr =  curr->next;
    }
    cout << "]";

    return 0;
}