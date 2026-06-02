//https://takeuforward.org/plus/dsa/problems/construct-a-bt-from-postorder-and-inorder?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {};
};

//TC = SC = O(n)
class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode *build(vector<int> &inorder, vector<int> &postorder,
                    int inStart, int inEnd, int &postIdx) {
        if(inStart > inEnd)
            return nullptr;

        TreeNode *root = new TreeNode(postorder[postIdx--]);
        int pos = mp[root->data];

        root->right = build(inorder, postorder, pos+1, inEnd, postIdx);
        root->left = build(inorder, postorder, inStart, pos-1, postIdx);

        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int n = inorder.size();
        for(int i=0; i<n; i++)
            mp[inorder[i]] = i;

        int postIdx = n - 1;

        return build(inorder, postorder, 0, n-1, postIdx);
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

vector<int> buildArray(string &s) {
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> ans;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            ans.push_back(stoi(temp));
    }

    return ans;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<int> postorder = buildArray(s1);
    vector<int> inorder = buildArray(s2);

    Solution sol;
    TreeNode *root = sol.buildTree(inorder, postorder);

    printTree(root);

    return 0;
}