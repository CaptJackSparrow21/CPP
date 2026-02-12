#include<bits/stdc++.h>
using namespace std;

class ListNode {
public :
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : data(x), next(next) {}
};

class Solution {
public:
    int getLength(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
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
    cout << sol.getLength(head) << endl;

    return 0;
}