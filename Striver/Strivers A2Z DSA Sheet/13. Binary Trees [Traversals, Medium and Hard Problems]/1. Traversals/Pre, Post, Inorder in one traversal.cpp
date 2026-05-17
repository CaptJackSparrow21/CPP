//https://takeuforward.org/plus/dsa/problems/pre,-post,-inorder-in-one-traversal?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
//definition for binary tree node
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {} 
};

class Solution {
public:
    vector<vector<int>> treeTraversal(TreeNode *root) {
        vector<int> pre, in, post;
        if(root == nullptr)
            return {in, pre, post};

        stack<pair<TreeNode *, int>> st;
        st.push({root, 1});

        while(!st.empty()) {
            auto it = st.top();
            st.pop();

            TreeNode *node = it.first;
            int state = it.second;

            //Preorder
            if(state == 1) {
                pre.push_back(node->data);
                state++;
                st.push({node, state});

                if(node->left)
                    st.push({node->left, 1});
            }
            //Inorder
            else if(state ==  2) {
                in.push_back(node->data);
                state++;
                st.push({node, state});
                if(node->right)
                    st.push({node->right, 1});
            }
            //Postorder
            else {
                post.push_back(node->data);
            }
        }
        return {in, pre, post};
    }
};

//Build Tree from Array
TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return nullptr;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i=1;
    while(!q.empty() && i < arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        //left child
        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;

        //right child
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

    string s;
    getline(cin, s);

    vector<string> arr;
    string temp = "";

    for(char c : s) {
        if( c == '[' || c == ']')
            continue;

        if(c == ',') {
            arr.push_back(temp);
            temp = "";
        }
        else {
            temp += c;
        }
    }

    arr.push_back(temp);

    TreeNode *root = buildTree(arr);
    Solution sol;
    vector<vector<int>> ans = sol.treeTraversal(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];

            if(j != ans[i].size()-1)
                cout << ",";
        }
        cout << "]";

        if(i != ans.size()-1)
            cout << ",";
    }
    cout << "]";

    return 0;
}