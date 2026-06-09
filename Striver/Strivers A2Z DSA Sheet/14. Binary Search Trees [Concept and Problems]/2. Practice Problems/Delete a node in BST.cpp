#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = SC = O(h)
class Solution {
public :
    TreeNode *deleteNode(TreeNode *root, int key) {
        if(root == nullptr)
            return nullptr;

        if(key < root->data)
            root->left = deleteNode(root->left, key);
        else if(key < root->data)
            root->right = deleteNode(root->right, key);
        else {
            if(root->left == NULL) {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }

            if(root->right == NULL) {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }

            TreeNode *succ = root->right;

            while(succ->left)
                succ = succ->left;

            root->data = succ->data;
            root->right = deleteNode(rp)
        }
    }
};

void printTree(TreeNode *root) {
    if(!root) {
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
    int key; cin >> key;
    
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
    TreeNode *ans = sol.deleteNode(root, key);

    printTree(ans);

    return 0;
}