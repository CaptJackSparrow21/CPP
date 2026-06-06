//https://takeuforward.org/plus/dsa/problems/flatten-binary-tree-to-linked-list?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {} 
};

//TC = O(n) && SC = O(1)
class Solution {
public:
    void flatten(TreeNode *root) {
        TreeNode *curr = root;

        while(curr) {
            if(curr->left) {
                TreeNode *prev = curr->left;

                while(prev->right)
                    prev = prev->right;

                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;
            }
            curr = curr->right;
        }
    }
};

TreeNode *buildTree(vector<string> arr) {
    if(arr.size() == 0 || arr[0] == "null" || arr[0] == "")
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

        if(c == ',') {
            arr.push_back(temp);
            temp = "";
        }
        else    
            temp += c;
    }
    arr.push_back(temp);

    TreeNode *root =  buildTree(arr);
    Solution sol;
    sol.flatten(root);

    TreeNode *curr = root;
    if(root == nullptr)
        cout << "[]";
    else {
        cout << "[";
        while(curr) {
            cout << curr->val;
            if(curr->right)
                cout << ",null,";
            curr = curr->right;
        }
        cout << "]";
    }
    
    return 0;
}