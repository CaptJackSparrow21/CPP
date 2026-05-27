//https://takeuforward.org/plus/dsa/problems/lca-in-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = SC = O(n)
class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if(root == nullptr)
            return nullptr;

        if(root == p || root == q)
            return root;
        
        TreeNode *left = lowestCommonAncestor(root->left, p, q);

        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        //if both sides return non-null
        //current node is lca
        if(left != NULL && right != NULL)
            return root;

        //otherwise return non-null side
        if(left != NULL)
            return left;

        return right;
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

TreeNode *findNode(TreeNode *root, int val) {
        if(root == nullptr)
            return NULL;

        if(root->data == val)
            return root;

        TreeNode *left = findNode(root->left, val);
        
        if(left != nullptr)
            return left;

        return findNode(root->right, val);

    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin, s);

    int pv, qv;
    cin >> pv >> qv;

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
    TreeNode *p = findNode(root, pv);
    TreeNode *q = findNode(root, qv);

    Solution sol;
    TreeNode *ans = sol.lowestCommonAncestor(root, p, q);
    cout << ans->data;

    return 0;
}