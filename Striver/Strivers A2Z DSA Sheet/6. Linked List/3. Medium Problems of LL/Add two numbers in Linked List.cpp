#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *&linkedList1, ListNode *&linkedList2) {
        ListNode dummy(0);
        ListNode *tail = &dummy;
        int carry = 0;
        ListNode *l1 = linkedList1, *l2 = linkedList2;
        
        while(l1 || l2 || carry) {
            int x = l1 ? l1->data : 0;
            int y = l2 ? l2->data : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return dummy.next;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    auto parseArrayLine = [] (string s) -> vector<int> {
        s.erase(remove(s.begin(), s.end(), '['), s.end());
        s.erase(remove(s.begin(), s.end(), ']'), s.end());

        stringstream ss(s);
        string temp;
        vector<int> nums;
        while(getline(ss, temp, ',')) {
            if(!temp.empty()) {
                nums.push_back(stoi(temp));
            }
        }
        return nums;
    };

    vector<int> nums1 = parseArrayLine(input1);
    vector<int> nums2 = parseArrayLine(input2);

    auto build = [] (const vector<int> nums) -> ListNode *{
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
        return head;
    };

    ListNode *linkedList1 = build(nums1);
    ListNode *linkedList2 = build(nums2);

    Solution sol;
    ListNode *curr = sol.addTwoNumbers(linkedList1, linkedList2);

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