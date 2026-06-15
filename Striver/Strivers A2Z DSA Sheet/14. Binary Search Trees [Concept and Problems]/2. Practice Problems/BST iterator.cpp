//https://takeuforward.org/plus/dsa/problems/bst-iterator?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = SC = O(h)
class BSTIterator {
public:
    stack<TreeNode *> st;
    void pushLeft(TreeNode *node) {
        while(node) {
            st.push(node);
            node = node->left;
        }
    }

    BSTIterator(TreeNode *root) {
        pushLeft(root);
    }

    bool hasNext() {
        return !st.empty();
    }

    int next() {    
        TreeNode *node = st.top();
        st.pop();

        if(node->right)
            pushLeft(node->right);

        return node->data;
    }
};

vector<string> parseOperations(string s) {
    vector<string> ops;
    string curr;

    for(char c : s) {
        if(isalpha(c))
            curr += c;
        else {
            if(!curr.empty()) {
                ops.push_back(curr);
                curr.clear();
            }
        }
    }
    return ops;
}

vector<string> parseTreeArray(string s) {
    vector<string> nodes;
    string curr = "";

    for(char c : s) {
        if(c == '[' || c == ']')
            continue;

        if(c == ',') {
            nodes.push_back(curr);
            curr = "";
        }
        else 
            curr += c;
    }
    nodes.push_back(curr);

    return nodes;
}

TreeNode *buildTree(vector<string> &nodes) {
    if(nodes.empty() || nodes[0] == "null")
        return nullptr;

    TreeNode *root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while(!q.empty() && i < nodes.size()) {
        TreeNode *curr = q.front();
        q.pop();

        if(i < nodes.size() && nodes[i] != "null") {
            curr->left = new TreeNode(stoi(nodes[i]));
            q.push(curr->left);
        }
        i++;

        if(i < nodes.size() && nodes[i] != "null") {
            curr->right = new TreeNode(stoi(nodes[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string opLine, treeLine;
    getline(cin, opLine);
    getline(cin, treeLine);

    vector<string> ops = parseOperations(opLine);
    vector<string> treeNodes = parseTreeArray(treeLine);

    TreeNode *root = buildTree(treeNodes);
    BSTIterator *it = nullptr;
    cout << "[";
    bool first = true;
    for(string op : ops) {
        if(op == "BSTIterator") {
            it = new BSTIterator(root);
            continue;
        }

        if(!first)
            cout << ",";

        if(op == "next")
            cout << it->next();
        else    
            cout << (it->hasNext() ? "true" : "false");

        first = false;
    }
    cout << "]";

    return 0;
}