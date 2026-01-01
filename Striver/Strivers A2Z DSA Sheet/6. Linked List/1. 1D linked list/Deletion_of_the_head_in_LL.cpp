//this question is is accordig to striver sheet

#include<bits/stdc++.h>
using namespace std;

//definition of SLL - 
class ListNode {
public :
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : data(x), next(next) {}
};

class Solution {
public :
    ListNode* deletehead(ListNode* &head) {
        if(head == nullptr) return nullptr;

        ListNode* temp = head;
        head = head->next;
        delete temp;

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
    head = sol.deletehead(head);

    cout << "[";
    ListNode* curr = head;
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