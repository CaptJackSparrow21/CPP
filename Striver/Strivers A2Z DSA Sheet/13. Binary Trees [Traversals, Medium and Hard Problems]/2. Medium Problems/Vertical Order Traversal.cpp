//https://takeuforward.org/plus/dsa/problems/vertical-order-traversal?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n long n) && SC = O(n)
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode *root) {
        vector<vector<int>> ans;
        if(root == nullptr)
            return ans;

        //col -> row ->sorted values
        map<int, map<int, multiset<int>>> mp;

        //node, row, col
        queue<pair<TreeNode *, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            TreeNode *node = it.first;

            int row = it.second.first;
            int col = it.second.second;

            mp[col][row].insert(node->data);

            if(node->left) 
                q.push({node->left, {row + 1, col - 1}});

            if(node->right)
                q.push({node->right, {row + 1, col + 1}});
        }

        for(auto colPair : mp) {
            vector<int> temp;
            for(auto rowPair : colPair.second) {
                for(auto val : rowPair.second)
                    temp.push_back(val);
            }
            ans.push_back(temp);
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

    vector<vector<int>> ans = sol.verticalTraversal(root);

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