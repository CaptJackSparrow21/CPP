/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
#define data val
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr)
            return nullptr;
        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            if(root->left == NULL) {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }

            if(root->right == NULL) {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }

            TreeNode *succ = root->right;
            while(succ->left)
                succ = succ->left;

            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
        return root;
    }
};
// @lc code=end

