/*
 * @lc app=leetcode id=545 lang=cpp
 *
 * [545] Boundary of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //check leaf nodes
    bool isLeaf(TreeNode *root) {
        return (root->left == nullptr &&
                 root->right == nullptr);
    }

    //add left boundary
    void addLeftBoundary(TreeNode *root, vector<int> &ans) {
        TreeNode *curr = root->left;
        while(curr) {
            if(!isLeaf(curr))
                ans.push_back(curr->val);
            
            if(curr->left)
                curr = curr->left;
            else    
                curr = curr->right;
        }
    }

    //add all leaf nodes
    void addLeaves(TreeNode *root, vector<int> &ans) {
        if(root == nullptr)
            return;
        
        if(isLeaf(root)) {
            ans.push_back(root->val);
            return;
        }

        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }

    //add right boundary
    void addRightBoundary(TreeNode *root, vector<int> &ans) {
        TreeNode *curr = root->right;
        vector<int> temp;

        while(curr) {
            if(!isLeaf(curr))
                temp.push_back(curr->val);

            if(curr->right)
                curr = curr->right;
            else    
                curr = curr->left;
        }

        for(int i=temp.size()-1; i>=0; i--)
            ans.push_back(temp[i]);
    }

    vector<int> boundary(TreeNode *root) {
        vector<int> ans;
        if(root == nullptr)
            return ans;

        if(!isLeaf(root))
            ans.push_back(root->val);

        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);

        return ans;

    }
};
// @lc code=end

