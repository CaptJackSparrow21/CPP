//https://takeuforward.org/plus/dsa/problems/top-view-of-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> topView(TreeNode *root) {
        vector<int> ans;
        if(root == nullptr)
            return ans;

        //hd -> node value
        map<int, int> mp;

        //node, horizontal distance
        queue<pair<TreeNode *, int>> q;

        q.push({root, 0});

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            TreeNode *node = it.first;
            int hd = it.second;

            if(mp.find(hd) == mp.end()) 
                mp[hd] = node->data;

            if(node->left)
                q.push({node->left, hd - 1});
            
            if(node->right)
                q.push({node->right, hd + 1});
        }

        for(auto it : mp)
            ans.push_back(it.second);

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
    vector<int> ans = sol.topView(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];\
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}