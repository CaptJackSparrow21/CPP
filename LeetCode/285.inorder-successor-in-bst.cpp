/*
 * @lc app=leetcode id=285 lang=cpp
 *
 * [285] Inorder Successor in BST
 */

// @lc code=start
class Solution {
public:
    vector<int> succPredBST(TreeNode *root, int key) {
        int pred = -1, succ = -1;
        TreeNode *curr = root;

        while(curr) {
            if(curr->data < key) {
                pred = curr->data;
                curr = curr->right;
            }
            else if(curr->data > key) {
                succ = curr->data;
                pred = curr->left;
            }
            else {
                //predecessor
                TreeNode *temp = curr->left;
                while(temp) {
                    pred = temp->data;
                    temp = temp->right;
                }

                //successor
                temp = curr->right;
                while(temp) {
                    succ = temp->data;
                    temp = temp->left;
                }
                break;
            }
        }
        return {pred, succ};
    }
};
// @lc code=end

