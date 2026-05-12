//https://takeuforward.org/plus/dsa/problems/lru-cache?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC :- get = O(1), put = O(1)
//SC = O(capacity)
class Node{
public:
    int key, val;
    Node *prev;
    Node *next;

    Node(int k, int v) {
        key = k;
        val = v;
        prev = next = NULL;
    }
};

class LRUCache {
public:
    int cap;
    unordered_map<int, Node*> mp;
    Node *tail;
    Node *head;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    // Remove node from list
    void remove(Node *node) {
        Node *left = node->prev;
        Node *right = node->next;

        left->next = right;
        right->prev = left;
    }

    // Insert node right after head
    void insert(Node *node) {
       Node *temp = head->next;

       head->next = node;
       node->prev = head;

       node->next = temp;
       temp->prev = node;
    }

    int get(int key_) {
        //Key not present
        if(mp.find(key_) == mp.end()) 
            return -1;

        Node *node = mp[key_];

        remove(node);
        insert(node);

        return node->val;
    }

    void put(int key_, int value) {
        //If key already exists
        if(mp.find(key_) != mp.end()) {
            Node *node = mp[key_];
            node->val = value;

            remove(node);
            insert(node);
            return;
        }

        //Cache full
        if(mp.size() == cap) {
            Node *lru = tail->prev;
            remove(lru);
            mp.erase(lru->key);
        }

        //Insert new node
        Node *node = new Node(key_, value);
        insert(node);
        mp[key_] = node;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int capacity;
    cin >> capacity;
    cin.ignore();
    
    string s;
    getline(cin, s);

    vector<vector<int>> ops;
    vector<int> curr;
    int num = 0;
    bool inNum = false;

    for(char c : s) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            inNum = true;
        }
        else {
            if(inNum) {
                curr.push_back(num);
                num = 0;
                inNum = false;
            }

            if(c == ']') {
                if(!curr.empty()) {
                    ops.push_back(curr);
                    curr.clear();
                }
            }
        }
    }

    LRUCache lru(capacity);
    cout << "[null,";
    bool first = true;

    for(auto &v : ops) {
        if(v[0] == 1) {
            lru.put(v[1], v[2]);
            if(!first)
                cout << ",";
            cout << "null";
        }
        else {
            int ans = lru.get(v[1]);
            if(!first)
                cout << ",";
            cout << ans;
        }
        first = false;
    }

    cout << "]";

    return 0;
}