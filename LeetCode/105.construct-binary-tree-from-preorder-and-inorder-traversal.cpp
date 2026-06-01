/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    };

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for(int i=0; i<inorder.size(); i++)
            mp[inorder[i]] = i;

        int preIndex = 0;
        return solve(preorder, 0, inorder.size()-1, preIndex, mp);
    }
};
// @lc code=end

