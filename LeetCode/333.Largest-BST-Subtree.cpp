/*
 * @lc app=leetcode id=333 lang=cpp
 *
 * [333] Largest BST Subtree
 */

// @lc code=start
/*struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
*/

struct NodeValue {
    int minNode, maxNode, maxSize;

    NodeValue(int mn, int mx, int sz) {
        minNode = mn;
        maxNode = mx;
        maxSize = sz;
    }
};

class Solution {
public:
    NodeValue solve(TreeNode *root) {
        if(!root)   
            return NodeValue(INT_MAX, INT_MIN, 0);
        
        NodeValue left = solve(root->left);
        NodeValue right = solve(root->right);

        if(left.maxNode < root->val &&
            root->val < right.minNode) {
                return NodeValue(
                min(left.minNode, root->val),
                max(right.maxNode, root->val),
                left.maxSize + right.maxSize + 1
                );
            }

        return NodeValue(INT_MIN, INT_MAX, 
            max(left.maxSize, right.maxSize));
    }

    int largestBST(TreeNode *root) {
        return solve(root).maxSize;
    }
};
// @lc code=end

