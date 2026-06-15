//https://takeuforward.org/plus/dsa/problems/bst-iterator?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}