//https://takeuforward.org/plus/dsa/problems/print-all-nodes-at-a-distance-of-k-in-bt?source=strivers-a2z-dsa-track

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
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k) {
        unordered_map<TreeNode *, TreeNode *> parent;

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

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

        int dist = 0;

        while(!q.empty()) {
            int sz = q.size();
            if(dist == k)
                break;
            
            dist++;

            while(sz--) {
                TreeNode *node = q.front();
                q.pop();

                if(node->left && !vis[node->left]) {
                    vis[node->left] = true;
                    q.push(node->left);
                }

                if(node->right && !vis[node->right]) {
                    vis[node->right] = true;
                    q.push(node->right);
                }

                if(parent.count(node) && !vis[parent[node]]) {
                    vis[parent[node]] = true;
                    q.push(parent[node]);
                }
            }
        }
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.front()->data);
            q.pop();
        }
        return ans;
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
        return nullptr;

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

    int p, k;
    cin >> p >> k;

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
    TreeNode *target = findNode(root, p);

    Solution sol;
    vector<int> ans = sol.distanceK(root, target, k);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}