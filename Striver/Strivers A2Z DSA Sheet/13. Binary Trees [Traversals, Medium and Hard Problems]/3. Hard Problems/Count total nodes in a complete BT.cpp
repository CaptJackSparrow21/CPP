//https://takeuforward.org/plus/dsa/problems/count-total-nodes-in-a-complete-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = O((log n)^2) && SC = O(log n)
class Solution {
public:
    int leftHeight(TreeNode *node) {
        int h = 0;
        while(node) {
            h++;
            node = node->left;
        }
        return h;
    }

    int rightHeight(TreeNode *node) {
        int h = 0;
        while(node) {
            h++;
            node = node->right;
        }
        return h;
    }

    int countNodes(TreeNode *root) {
        if(root == nullptr)
            return 0;

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        if(lh == rh)
            return (1 << lh) - 1;

        return 1 + 
                countNodes(root->left) +
                countNodes(root->right);
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *>  q;
    q.push(root);

    int i = 1;
    while(!q.empty() && i < arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[0]));
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
    cout << sol.countNodes(root);

    return 0;
}