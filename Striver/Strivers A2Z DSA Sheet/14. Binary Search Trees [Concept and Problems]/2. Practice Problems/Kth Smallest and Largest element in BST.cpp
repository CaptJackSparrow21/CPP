//https://takeuforward.org/plus/dsa/problems/kth-smallest-and-largest-element-in-bst?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = O(h + k) && SC = O(h)
class Solution {
public:
    int smallAns, largeAns;
    int cnt;

    void inorder(TreeNode *root, int k) {
        if(!root || cnt >= k)
            return;

        inorder(root->left, k);

        cnt++;
        if(cnt == k) {
            smallAns = root->data;
            return;
        }
        inorder(root->right, k);
    }

    void reverseInorder(TreeNode *root, int k) {
        if(!root || cnt >= k)
            return;

        reverseInorder(root->right, k);

        cnt++;
        if(cnt == k) {
            largeAns = root->data;
            return;
        }

        reverseInorder(root->left, k);
    }

    vector<int> kLargesSmall(TreeNode *root, int k) {
        cnt = 0;
        inorder(root, k);

        cnt = 0;
        reverseInorder(root, k);

        return {smallAns, largeAns};
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
    vector<int> ans = sol.kLargesSmall(root, k);
    cout << "[" << ans[0] << "," << ans[1] << "]";

    return 0;
}