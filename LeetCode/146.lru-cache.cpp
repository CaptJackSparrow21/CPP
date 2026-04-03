/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start
struct Node {
    int key, val;
    Node *prev;
    Node *next;
    Node (int k, int v) : key(k), val(v), prev(nullptr), 
    next(nullptr) {}
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

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

