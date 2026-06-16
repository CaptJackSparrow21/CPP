//https://takeuforward.org/plus/dsa/problems/largest-bst-in-binary-tree?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = O(n) && SC = O(h)
struct NodeValue {
    int minNode, maxNode, maxSize;

    NodeValue(int mn, int mx, int sz) {
        minNode = mn;
        maxNode = mx;
        maxSize = sz;
    }
};

class Solution {
public:
    NodeValue solve(TreeNode *root) {
        if(!root)
            return NodeValue(INT_MAX, INT_MIN, 0);

        NodeValue left = solve(root->left);
        NodeValue right = solve(root->right);

        if(left.maxNode < root->data && 
            root->data < right.minNode) {
            return NodeValue(
                min(left.minNode, root->data),
                max(right.maxNode, root->data),
                left.maxSize + right.maxSize + 1
            );
        }
        return NodeValue(INT_MIN, INT_MAX, 
            max(left.maxSize, right.maxSize));
    }

    int largestBST(TreeNode *root) {
        return solve(root).maxSize;
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

        if(i < arr.size() &&  arr[i] != "null") {
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
        if(c == '['|| c == ']')
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
    cout << sol.largestBST(root);

    return 0;
}