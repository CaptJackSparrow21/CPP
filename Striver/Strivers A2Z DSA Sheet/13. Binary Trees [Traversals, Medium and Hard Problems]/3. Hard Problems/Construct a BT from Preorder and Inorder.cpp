//https://takeuforward.org/plus/dsa/problems/construct-a-bt-from-preorder-and-inorder?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = Sc = O(n)
class Solution {
public:
    TreeNode *solve(vector<int> &preorder, int inStart, int inEnd,
                    int &preIndex, unordered_map<int, int> &mp) {
        if(inStart > inEnd)
            return nullptr;

        int rootVal = preorder[preIndex++];
        TreeNode *root = new TreeNode(rootVal);
        int pos = mp[rootVal];

        root->left = solve(preorder, inStart, pos-1, preIndex, mp);
        root->right = solve(preorder, pos+1, inEnd, preIndex, mp);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        unordered_map<int, int> mp;
        for(int i=0; i<inorder.size(); i++) 
            mp[inorder[i]] = i;

        int preIndex = 0;

        return solve(preorder, 0, inorder.size()-1, preIndex, mp);
    }
};

void printTree(TreeNode *root) {
    if(!root) {
        cout << "[]";
        return;
    }

    vector<string> ans;
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()) {
        TreeNode *node = q.front();
        q.pop();

        if(node) {
            ans.push_back(to_string(node->data));
            q.push(node->left);
            q.push(node->right);
        }
        else
            ans.push_back("null");
    }

    while(!ans.empty() && ans.back() == "null")
        ans.pop_back();

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<int> preorder, inorder;

    s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());

    s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
    s2.erase(remove(s2.begin(), s2.end(), ']'), s2.end());

    stringstream ss1(s1);
    string temp1;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty()) 
            preorder.push_back(stoi(temp1));
    }

    stringstream ss2(s2);
    string temp2;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            inorder.push_back(stoi(temp2));
    }

    Solution sol;
    TreeNode *root = sol.buildTree(preorder, inorder);

    printTree(root);

    return 0;
}