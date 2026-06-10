/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    int smallAns, largeAns;
    int cnt;

    void inorder(TreeNode *root, int k) {
        if(!root || cnt >= k)
            return;

        inorder(root->left, k);

        cnt++;
        if(cnt == k) {
            smallAns = root->val;
            return;
        }

        inorder(root->right, k);
    }

    // void reverseInorder(TreeNode *root, int k) {
    //     if(!root || cnt >= k)
    //         return;

    //     reverseInorder(root->right, k);
        
    //     cnt++;
    //     if(cnt == k) {
    //         largeAns = root->val;
    //         return;
    //     }

    //     reverseInorder(root->left, k);
    // }

    int kthSmallest(TreeNode* root, int k) {
        cnt = 0;
        inorder(root, k);

        // cnt = 0;
        // reverseInorder(root, k);

        return smallAns;
    }
};
// @lc code=end

