//https://takeuforward.org/plus/dsa/problems/flattening-of-ll

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode() {
        val = 0;
        next = nullptr;
        child = nullptr;
    }
    ListNode(int x) {
        val = x;
        next = nullptr;
        child = nullptr;
    }
    ListNode(int x, ListNode *next1, ListNode *child1) {
        val = x;
        next = next1;
        child = child1;
    }
};

class Solution {
    ListNode *mergeLists(ListNode *a, ListNode *b) {
        if(!a) return b;
        if(!b) return a;

        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        while(a && b) {
            ListNode *pick;
            if(a->val <= b->val) {
                pick = a;
                a = a->child;
            }
            else {
                pick = b;
                b = b->child;
            }

            if(!head) {
                head = tail = pick;
            }
            else {
                tail->child = pick;
                tail = pick;
            }
            tail->next = nullptr;
        }

        ListNode *rest = a ? a : b;
        if(!head) return rest;

        tail->child = rest;
        while(rest) {
            rest->next = nullptr;
            rest = rest->child;
        }
        return head;
    }

public:
    ListNode *flattenLinkedList(ListNode *&head) {
        if(!head || !head->next) return head;
        head->next = flattenLinkedList(head->next);
        ListNode *merged = mergeLists(head, head->next);
        return merged;
    }
};


vector<vector<int>> parseInput(const string &s) {
    vector<vector<int>> result;
    vector<int> curr;
    int i=0;
    int n = s.size();

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

ListNode *buildFromVector(const vector<vector<int>> &v) {
    ListNode *head = nullptr;
    ListNode *prevHead = nullptr;

    for(const auto &col : v) {
        if(col.empty()) continue;

        ListNode *colHead = nullptr;
        ListNode *colTail = nullptr;

        for(int x : col) {
            ListNode *node = new ListNode(x);
            if(!colHead) {
                colHead = colTail = node;
            }
            else {
                colTail->child = node;
                colTail = node;
            }
        }

        if(!head) {
            head = colHead;
        }
        else {
            prevHead->next = colHead;
        }

        prevHead = colHead;
    }
    return head;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    getline(cin, s);

    vector<vector<int>> v = parseInput(s);
    ListNode *head = buildFromVector(v);

    Solution sol;
    ListNode *curr = sol.flattenLinkedList(head);

    bool first = true;
    cout << "[";
    while(curr) {
        if(!first) cout << ",";
        cout << curr->val;
        first = false;
        curr = curr->child;
    }
    cout << "]" << endl;

    return 0;
}