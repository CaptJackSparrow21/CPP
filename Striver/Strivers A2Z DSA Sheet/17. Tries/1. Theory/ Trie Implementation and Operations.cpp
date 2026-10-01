//https://takeuforward.org/practice/dsa/trie-implementation-and-operations

#include<bits/stdc++.h>
using namespace std;
#define int long long

// L -> length of word
//TC = O(L) && 
class Trie {
    struct Node {
        Node *child[26]{};
        bool isEnd = false;
    };

    Node *root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';

            if(!curr->child[i])
                curr->child[i] = new Node();

            curr = curr->child[i];
        }
        curr->isEnd = true;
    }

    bool search(string word) {
        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';
            if(!curr->child[i])
                return false;
            curr = curr->child[i];
        }
        return curr->isEnd;
    }

    bool startsWith(string prefix) {
        Node *curr = root;
        for(char c : prefix) {
            int i = c - 'a';
            if(!curr->child[i])
                return false;
            curr =  curr->child[i];
        }
        return true;
    }
};

vector<string> parse(string s) {
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<string> result;
    string temp;

    stringstream ss(s);
    while(getline(ss, temp, ','))
        result.push_back(temp);

    return result;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string operations, values;
    getline(cin, operations);
    getline(cin, values);

    vector<string> op = parse(operations);
    vector<string> val = parse(values);

    Trie trie;
    cout << '[';
    for(int i=0; i<op.size(); i++) {
        if(op[i] == "Trie")
            cout << "null";
        else if(op[i] == "insert") {
            trie.insert(val[i]);
            cout << "null";
        }
        else if(op[i] == "search")
            cout << (trie.search(val[i]) ? "true" : "false");
        else if(op[i] == "startsWith") 
            cout << (trie.startsWith(val[i]) ? "true" : "false");
        
            if(i + 1 < op.size())
                cout << ',';
    }
    cout << ']';

    return 0;
}