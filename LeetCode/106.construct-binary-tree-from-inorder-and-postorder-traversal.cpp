/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    unordered_map<int, int> mp;

    TreeNode *build(vector<int> &inorder, vector<int> &postorder,
        int inStart, int inEnd, int &postIdx) {
        if(inStart > inEnd)
            return nullptr;

        TreeNode *root = new TreeNode(postorder[postIdx--]);
        int pos = mp[root->val];

        root->right = build(inorder, postorder, pos+1, inEnd, postIdx);
        root->left = build(inorder, postorder, inStart, pos-1, postIdx);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();

        for(int i=0; i<n; i++) 
            mp[inorder[i]] = i;

        int postIdx = n - 1;

        return build(inorder, postorder, 0, n-1, postIdx);
    }
};
// @lc code=end

