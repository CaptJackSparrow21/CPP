//https://takeuforward.org/plus/dsa/problems/lru-cache?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC = O(capacity)
struct Node {
    int key, val;
    Node *prev;
    Node *next;

    Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
    int capacity;
    unordered_map<int, Node *> mp;
    Node *head;
    Node *tail;

    void insertFront(Node *node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node; 
    }

    void removeNode(Node *node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;

        Node *node = mp[key];
        removeNode(node);
        insertFront(node);
        return node->val;
    }

    void put(int key, int value) {
       if(mp.find(key) != mp.end()) {
        Node *node = mp[key];
        node->val = value;
        removeNode(node);
        insertFront(node);
        }
       else {
            if((int)mp.size() == capacity) {
                Node *lru = tail->prev;
                removeNode(lru);
                mp.erase(lru->key);
                delete lru;
            }

            Node *newNode = new Node(key, value);
            insertFront(newNode);
            mp[key] = newNode;
        }
    }
};

vector<vector<int>> parse(string s) {
    vector<vector<int>> res;
    vector<int> curr;
    int num = 0;
    bool building = false;
    bool negative = false;

    for(char c : s) {
        if(c == '-') {
            negative = true;
        }
        else if(isdigit(c)) {
            num = num * 10 + (c - '0');
            building = true;
        }
        else {
            if(building) {
                curr.push_back(negative ? -num : num);
                num = 0;
                building = false;   
                negative = false;
            }
            if(c == ']') {
                if(!curr.empty()) {
                    res.push_back(curr);
                    curr.clear();
                }
            }
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int capacity;
    cin >> capacity;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> ops = parse(s);

    LRUCache cache(capacity);
    
    bool first = true;
    cout << "[null,";
    for(auto &op : ops) {
        if(op[0] == 1) {
            cache.put(op[1], op[2]);
            if(!first) cout << ",";
            cout << "null";
        }
        else {
            int ans = cache.get(op[1]);
            if(!first) cout << ",";
            cout << ans;
        }
        first = false;
    }
    cout << "]";

    return 0;
}