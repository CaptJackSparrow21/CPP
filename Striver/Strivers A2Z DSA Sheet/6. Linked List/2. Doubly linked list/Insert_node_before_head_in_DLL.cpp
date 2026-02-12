#include<bits/stdc++.h>
using namespace std;

//definition of DLL
class ListNode {
public :
    int data;
    ListNode* prev;
    ListNode* next;
    ListNode() : data(0), prev(nullptr), next(nullptr) {}
    ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
    ListNode(int x, ListNode* prev, ListNode* next) :
        data(x), prev(prev), next(next) {}
};

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* temp = new ListNode(X);
        temp->next = head;
        if(head != nullptr) head->prev = temp;
        return temp;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int X; cin >> X;

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
            node->prev = tail;
            tail = node;
        }
    }

    Solution sol;
    head = sol.insertBeforeHead(head, X);

    cout << "[";
    ListNode* curr = head;
    bool first = true;
    while(curr) {
        if(!first) cout << ',';
        cout << curr->data;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}