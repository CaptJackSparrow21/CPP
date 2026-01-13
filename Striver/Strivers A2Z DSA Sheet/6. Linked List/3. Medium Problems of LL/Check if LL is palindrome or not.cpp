#include<bits/stdc++.h>
using namespace std;

struct ListNode{
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

ListNode *reverseList(ListNode *head) { // reversing the list
    ListNode *prev = NULL, *curr = head;
    while(curr) {
        ListNode *node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = node;
    }
    return prev;
}

class Solution{
public:
    bool isPalindrome(ListNode *head) {
        if(!head || !head->next) return true;
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *second = reverseList(slow->next);
        ListNode *p1 = head, *p2 = second;
        bool ok = true;
        while(p2) {
            if(p1->val != p2->val) {
                ok = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        return ok;
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

    ListNode *head = NULL, *tail = NULL;
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
    cout << boolalpha << sol.isPalindrome(head) << endl;


    return 0;
}