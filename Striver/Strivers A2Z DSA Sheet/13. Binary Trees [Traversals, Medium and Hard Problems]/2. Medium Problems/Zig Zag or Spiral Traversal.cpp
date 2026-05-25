//https://takeuforward.org/plus/dsa/problems/zig-zag-or-spiral-traversal?source=strivers-a2z-dsa-track

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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        vector<vector<int>> ans;

        if(root == nullptr)
            return ans;

        queue<TreeNode *> q;
        q.push(root);

        bool leftToRight = true;
        while(!q.empty()) {
            int n = q.size();
            vector<int> level(n);

            for(int i=0; i<n; i++) {
                TreeNode *curr = q.front();
                q.pop();

                int idx;
                if(leftToRight)
                    idx = i;
                else    
                    idx = n - 1 - i;

                level[idx] = curr->data;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        return ans;
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *>q;
    q.push(root);

    int i=1; 
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

    vector<string> arr;
    string temp = "";

    for(char c : s) {
        if(c == '[' || c ==']')
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
    vector<vector<int>> ans = sol.zigzagLevelOrder(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            cout << ((j+1) == ans[i].size() ? "" : ",");
        }
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}