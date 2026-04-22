//https://takeuforward.org/plus/dsa/problems/merge-k-sorted-lists?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode {
    int val;
    ListNode *next;
    ListNode (int data1) {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

ListNode *buildList(vector<int> &arr);

//TC = O(n log k) && SC = O(k)
class Solution {
public:
    ListNode *mergeKSortedLists(vector<ListNode*> &head) {
        auto cmp = [] (ListNode *a, ListNode *b) { 
            return a->val >  b->val; 
        };

        /* We define a lambda comparator cmp for the priority queue.
        It returns a true if a->val > b->val.
        In c++ priority_queue, "true" means a has lower priority than b.
        So this makes the smallest value have the highest priority -> min-heap behaviour. */

        priority_queue<ListNode *, vector<ListNode *>, 
                    decltype(cmp) > pq(cmp);

        for(ListNode *node : head) if(node) pq.push(node);

        ListNode dummy(0);
        ListNode *tail = &dummy;

        while(!pq.empty()) {
            ListNode *node = pq.top();
            pq.pop();
            tail->next = node;
            tail = tail->next;
            if(node->next) pq.push(node->next);
        }
        return dummy.next;
    }
};

vector<ListNode *> parseInput(string s) {
    vector<ListNode *> head;
    vector<int> temp;

    int num = 0;
    bool building = false;

    for(char c : s) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            building = true;
        }
        else {
            if(building) {
                temp.push_back(num);
                num = 0;
                building = false;
            }

            if(c == ']') {
                if(!temp.empty()) {
                    head.push_back(buildList(temp));
                    temp.clear();
                }
            }
        }
    }
    return head;
}

ListNode *buildList(vector<int> &arr) {
    if(arr.empty()) return NULL;

    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;

    for(int i=1; i<arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printList(ListNode *head) {
    cout << "[";
    while(head) {
        cout << head->val;
        if(head->next) cout << ",";
        head = head->next;
    }
    cout << "]";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    vector<ListNode *> lists = parseInput(s);

    Solution sol;
    ListNode *result = sol.mergeKSortedLists(lists);
    printList(result);

    return 0;
}