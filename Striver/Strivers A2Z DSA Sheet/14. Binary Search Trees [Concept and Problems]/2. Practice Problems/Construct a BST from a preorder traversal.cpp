//https://takeuforward.org/plus/dsa/problems/construct-a-bst-from-a-preorder-traversal?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = O(n) && SC = O(h)
class Solution {
public:
    TreeNode *build(vector<int> &preorder, int &idx, int bound) {
        if(idx == preorder.size() || preorder[idx] > bound)
            return nullptr;

        TreeNode *root = new TreeNode(preorder[idx++]);

        root->left = build(preorder, idx, root->data);
        root->right = build(preorder, idx, bound);

        return root;
    }

    TreeNode *bstFromPreorder(vector<int> &preorder) {
        int idx = 0;
        return build(preorder, idx, INT_MAX);
    }
};

void printTree(TreeNode *root) {
    if(root == NULL) {
        cout << "[]";
        return ;
    }

    vector<string> ans;
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()) {
        TreeNode *node = q.front();
        q.pop();

        if(node) {
            ans.push_back(to_string(node->data));
            q.push(node->left);
            q.push(node->right);
        }
        else
            ans.push_back("null");
    }

    while(!ans.empty() && ans.back() == "null") 
        ans.pop_back();

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<int> preorder;
    string temp;
    stringstream ss(s);
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            preorder.push_back(stoi(temp));
    }

    Solution sol;
    TreeNode *ans = sol.bstFromPreorder(preorder);

    printTree(ans);

    return 0;
}