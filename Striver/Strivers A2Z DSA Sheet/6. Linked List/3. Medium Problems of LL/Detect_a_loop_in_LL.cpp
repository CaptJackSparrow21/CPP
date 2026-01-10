#include<bits/stdc++.h>
using namespace std;

//definition of ll
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
    ListNode (int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

class Solution {
public: 
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
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

    ListNode *head = NULL;
    ListNode *tail = NULL;
    ListNode *loopNode = NULL;

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
        if(i == pos) loopNode = node;
    }

    if(pos != -1 && tail && loopNode) tail->next = loopNode;
    
    Solution sol;
    cout << boolalpha << sol.hasCycle(head) << endl;

    return 0;
}