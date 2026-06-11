//https://takeuforward.org/plus/dsa/problems/check-if-a-tree-is-a-bst-or-not?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//can also apply inorder logic 
// like if(prev > current) return false
//TC = O(n) && SC = O(h)
class Solution {
public:
    bool check(TreeNode *root, int mn, int mx) {
        if(root == NULL)
            return true;

        if(root->data <= mn || root->data >= mx)
            return false;
        
        return check(root->left, mn, root->data) &&
               check(root->right, root->data, mx);
    }

    bool isBST(TreeNode *root) {
        return check(root, INT_MIN, INT_MAX);
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while(!q.empty() && i < arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;

        if(i < arr.size() && arr[i] != "null") {
            curr->right = new TreeNode(stoi(arr[i]));
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

    string s;
    getline(cin, s);

    vector<string> arr;
    string temp = "";

    for(char c : s) {
        if(c == '[' || c == ']')
            continue;
        
        if (c == ',') {
            arr.push_back(temp);
            temp = "";
        }
        else 
            temp += c;
    }
    arr.push_back(temp);

    TreeNode *root = buildTree(arr);
    Solution sol;
    cout << boolalpha << sol.isBST(root);

    return 0;
}