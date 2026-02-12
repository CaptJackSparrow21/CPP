//this question is according to leetcode question

#include<bits/stdc++.h>
using namespace std;

// definition of SLL
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x) , next(NULL) {}
};

class Solution {
public :
    void deleteNode(ListNode* node) {
        if(node == NULL || node->next == NULL) return;

        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int nodeVal; cin >> nodeVal;

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

    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for(int i=0; i<nums.size(); i++) {
        int val = nums[i];
        ListNode* node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    Solution sol;

    //handle empty list
    if(head != nullptr) {
        //case 3. single node list [x] & nodeVal = x
        if(head->next == nullptr && head->val == nodeVal) {
            delete head;
            head = nullptr;
        }
        else {
            //find node with given value and its previous
            ListNode* curr = head;
            ListNode* prev = nullptr;
            while(curr != nullptr && curr->val != nodeVal) {
                prev = curr;
                curr = curr->next;
            }

            if(curr != nullptr) {
                //case 1. node is non-tail
                if(curr->next != nullptr) {
                    sol.deleteNode(curr);
                }
                else {
                    // case 2. node is tail
                    prev->next = nullptr;
                    delete curr;
                }
            }
        }
    }

    cout << "[";
    bool first = true;
    ListNode* p = head;
    while(p != nullptr) {
        if(!first) cout << ",";
        cout << p->val;
        first = false;
        p = p->next;
    }
    cout << "]\n";
    return 0;
}