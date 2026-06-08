//https://takeuforward.org/plus/dsa/problems/insert-a-given-node-in-bst?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        if(root == nullptr)
            return new TreeNode(val);

        TreeNode *curr = root;

        while(curr) {
            if(val < curr->data) {
                if(curr->left == NULL) {
                    curr->left = new TreeNode(val);
                    break;
                }
                curr = curr->left;
            }
            else {
                if(curr->right == nullptr) {
                    curr->right = new TreeNode(val);
                }
            }
        }
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

void printTree(TreeNode *root) {
    if(root == NULL) {
        cout << "[]";
        return;
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
    int val; cin >> val;

    vector<string> arr;
    string temp = "";

    for(char c : s) {
        if(c == '[' || c == ']')
            continue;

        if(c == ',') {
            arr.push_back(temp);
            temp = "";
        }
        else
            temp += c;
    }
    arr.push_back(temp);

    TreeNode *root = buildTree(arr);
    Solution sol;
    TreeNode *root = sol.insertIntoBST(root, val);

    printTree(root);

    return 0;
}