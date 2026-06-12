//https://takeuforward.org/plus/dsa/problems/lca-in-bst?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

class Solution {
public:
    TreeNode *lca(TreeNode *root, int p, int q) {

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

        
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int p, q;
    cin >> p >> q;

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



    return 0;
}