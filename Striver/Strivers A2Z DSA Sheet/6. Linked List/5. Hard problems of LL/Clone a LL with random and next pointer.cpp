//https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode *random;
    ListNode() {
        val = 0;
        next = nullptr;
        random = nullptr;
    }
    ListNode(int x) {
        val = x;
        next = nullptr;
        random = nullptr;
    }
    ListNode(int x, ListNode *next1, ListNode *random1) {
        val = x;
        next = next1;
        random = random1;
    }
};

class Solution {
public:
    ListNode *copyRandomList(ListNode *head) {
        if(!head) return nullptr;
        
        for(ListNode *curr = head; curr;) {
            ListNode *copy = new ListNode (curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        for(ListNode *curr = head; curr; curr = curr->next->next) {
            if(curr->random) {
                curr->next->random = curr->random->next;
            }
        }

        ListNode *copyHead = head->next;
        ListNode *orig = head;
        ListNode *copy = copyHead;

        while(orig) {
            orig->next = orig->next->next;
            copy->next = copy->next ? copy->next->next : nullptr;
            orig = orig->next;
            copy = copy->next;
        }
        return copyHead;
    }
};

ListNode *buildList(const vector<vector<int>> &arr) {
    if(arr.empty()) return nullptr;

    int n = arr.size();
    vector<ListNode *> nodes(n);

    for(int i=0; i<n; i++) {
        nodes[i] = new ListNode(arr[i][0]);
    }

    for(int i=0; i+1<n; i++) {
        nodes[i]->next = nodes[i+1];
    }

    for(int i=0; i<n; i++) {
        int idx = arr[i][1];
        if(idx == -1) {
            nodes[i]->random = nullptr;
        }
        else {
            nodes[i]->random = nodes[idx];
        }
    }
    return nodes[0];
}

vector<vector<int>> parseInput(const string &s) {
    vector<vector<int>> result;
    vector<int> curr;
    int i=0, n = s.size();

    while(i < n) {
        if(s[i] == '[') {
            curr.clear();
            i++;

            while(i < n && s[i] != ']') {
                if(s[i] == ' ' || s[i] == ',') {
                    i++;
                    continue;
                }

            if(s[i] == '-' || isdigit(s[i])) {
                int sign = 1;
                if(s[i] == '-') {
                    sign = -1;
                    i++;
                    }

                int val = 0;
                while(i < n && isdigit(s[i])) {
                    val = val * 10 + (s[i] - '0');
                    i++;
                    }
                    curr.push_back(sign * val);
                }
                else {
                    i++;
                }
            }
            if(!curr.empty()) result.push_back(curr);
        }
        i++;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    vector<vector<int>> arr = parseInput(s);
    ListNode *head = buildList(arr);

    Solution sol;
    ListNode *curr = sol.copyRandomList(head);

    bool first = true;
    cout << "[";
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr = curr->next;
    }
    cout << "]\n";

    return 0;
}