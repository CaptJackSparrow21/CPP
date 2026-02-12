#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data; 
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x) , next(next) {}
};

class Solution {
public:
    ListNode *sortList(ListNode *&head) {
        if(!head || !head->next) return head;
        ListNode *zeroN = new ListNode(0);
        ListNode *oneN = new ListNode(0);
        ListNode *twoN = new ListNode(0);

        ListNode *zero = zeroN, *one = oneN, *two = twoN;

        for(ListNode *curr = head; curr; curr = curr->next) {
            if(curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            }
            else if(curr->data == 1) {
                one->next = curr;
                one = one->next;
            }
            else {
                two->next = curr;
                two = two->next;
            }
        }

        zero->next = (oneN->next) ? oneN->next : twoN->next;
        one->next = twoN->next;
        two->next = nullptr;

        ListNode *newHead = zeroN->next;
        delete zeroN, oneN, twoN;

        return newHead;

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
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = nullptr, *tail = nullptr;
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
    ListNode *curr = sol.sortList(head);

    bool first = true;
    cout << "[";
    while(curr) {
        if(!first) cout << ",";
        cout << curr->data;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}