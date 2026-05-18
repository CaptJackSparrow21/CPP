//https://takeuforward.org/plus/dsa/problems/preorder-traversal?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
//Definition of binary tree
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void solve(TreeNode *root, vector<int> &ans) {
        if(root == nullptr)
            return;

        ans.push_back(root->data);
        solve(root->left, ans);
        solve(root->right, ans);
    }

    vector<int> preorder(TreeNode *root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};

//Build Tree from array
TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return nullptr;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i=1;
    while(!q.empty() && i<arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        //left child
        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;

        //right child
        if(i < arr.size() && arr[i] != "null") {
            curr->right = new TreeNode(stoi(arr[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

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
    vector<int> ans = sol.preorder(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size()-1)
            cout << ",";
    }
    cout << "]";

    return 0;
}