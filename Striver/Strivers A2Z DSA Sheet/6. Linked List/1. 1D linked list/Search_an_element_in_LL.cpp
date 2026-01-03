#include<bits/stdc++.h>
using namespace std;

//definiton of single LL
class ListNode {
public :
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(nullptr){}
    ~ListNode() {
        delete next;
    }
};

class Solution {
public :
    bool searchKey(ListNode* head, int key) {
        ListNode* curr = head;
        while(curr != nullptr) {
            if(curr->val == key) return true;
            curr = curr->next;
        }
        return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int key; cin >> key;

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
        int data = nums[i];
        ListNode* node = new ListNode(data);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    Solution sol;
    bool result = sol.searchKey(head, key);
    if(result) cout << "true\n";
    else cout << "false\n";

    return 0;
}