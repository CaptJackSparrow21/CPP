//https://takeuforward.org/plus/dsa/problems/boundary-traversal?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public: 
    //check leaf nodes
    bool isLeaf(TreeNode *root) {
        return (root->left == nullptr &&
                root->right == nullptr);
    }

    //add left boundary
    void addLeftBoundary(TreeNode *root, vector<int> &ans) {
        TreeNode *curr = root->left;
        while(curr) {
            if(!isLeaf(curr))
                ans.push_back(curr->data);

            if(curr->left)
                curr = curr->left;
            else    
                curr = curr->right;
        }
    }

    //add all leaf nodes
    void addLeaves(TreeNode *root, vector<int> &ans) {
        if(root == nullptr)
            return;

        if(isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }

        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }

    //add right boundary
    void addRightBoundary(TreeNode *root, vector<int> &ans) {
        TreeNode *curr = root->right;
        vector<int> temp;

        while(curr) {
            if(!isLeaf(curr))
                temp.push_back(curr->data);

            if(curr->right)
                curr = curr->right;
            else    
                curr = curr->left;
        }

        //reverse order
        for(int i=temp.size()-1; i>=0; i--)
            ans.push_back(temp[i]);
    }

    vector<int> boundary(TreeNode *root) {
        vector<int> ans;
        if(root == nullptr)
            return ans;

        if(!isLeaf(root))
            ans.push_back(root->data);

        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i=1;
    while(!q.empty() && i < arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));\
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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
    vector<int> ans = sol.boundary(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}