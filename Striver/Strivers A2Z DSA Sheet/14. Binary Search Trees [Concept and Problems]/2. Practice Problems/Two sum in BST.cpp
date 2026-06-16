//https://takeuforward.org/plus/dsa/problems/two-sum-in-bst?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = SC = O(n)
class Solution {
public:
    unordered_set<int> st;

    bool dfs(TreeNode *root, int k) {
        if(root == nullptr)
            return false;

        if(st.count(k - root->data))
            return true;

        st.insert(root->data);

        return dfs(root->left, k) || dfs(root->right, k);
    }

    bool twoSumBST(TreeNode *root, int k) {
        return dfs(root, k);
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int k; cin >> k;

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
    cout << boolalpha << sol.twoSumBST(root, k);

    return 0;
}