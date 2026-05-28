//https://takeuforward.org/plus/dsa/problems/maximum-width-of-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = SC = O(n) 
#define ll long long
class Solution {
public:     
    ll int widthOfBinaryTree(TreeNode *root) {
        if(root == nullptr)
            return 0;

        ll ans = 0;
        queue<pair<TreeNode *, ll>> q;
        q.push({root, 0});

        while(!q.empty()) {
            int size = q.size();
            ll mini = q.front().second;
            ll first, last;

            for(int i=0; i<size; i++) {
                TreeNode *node = q.front().first;
                ll idx = q.front().second - mini;
                q.pop();

                if(i == 0)
                    first = idx;

                if(i == size - 1)
                    last = idx;

                if(node->left)
                    q.push({node->left, 2 * idx + 1});
                if(node->right)
                    q.push({node->right, 2 * idx + 2});
            }
            ans = max(ans, last - first + 1);
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

        if(i < arr.size() & arr[i] != "null") {
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
    ll ans = sol.widthOfBinaryTree(root);
    cout << ans;

    return 0;
}