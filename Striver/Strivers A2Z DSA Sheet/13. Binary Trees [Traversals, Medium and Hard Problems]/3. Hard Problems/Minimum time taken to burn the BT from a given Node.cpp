//https://takeuforward.org/plus/dsa/problems/minimum-time-taken-to-burn-the-bt-from-a-given-node?source=strivers-a2z-dsa-track

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
    int timeToBurnTree(TreeNode *root, int start) {
        unordered_map<TreeNode *, TreeNode *> parent;
        TreeNode *target = NULL;

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            if(node->data == start)
                target = node;

            if(node->left) {
                parent[node->left] = node;
                q.push(node->left);
            }

            if(node->right) {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
        unordered_map<TreeNode *, bool> vis;

        q.push(target);
        vis[target] = true;

        int time = 0;

        while(!q.empty()) {
            int sz = q.size();
            bool burned = false;

            for(int i=0; i<sz; i++) {
                TreeNode *node = q.front();
                q.pop();

                if(node->left && !vis[node->left]) {
                    vis[node->left] = true;
                    q.push(node->left);
                    burned = true;
                }

                if(node->right && !vis[node->right]) {
                    vis[node->right] = true;
                    q.push(node->right);
                    burned = true;
                }

                if(parent.count(node) && !vis[parent[node]]) {
                    vis[parent[node]] = true;
                    q.push(parent[node]);
                    burned = true;
                }
            }
            if(burned)
                time++;
        }
        return time;
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s; 
    getline(cin, s);
    int start; cin >> start;

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
    cout << sol.timeToBurnTree(root, start);

    return 0;
}