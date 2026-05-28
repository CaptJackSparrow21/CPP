/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
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
#define ll long long
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;

        ll ans = 0;
        queue<pair<TreeNode *, ll>> q;
        q.push({root, 0});

        while(!q.empty()) {
            int size = q.size();
            ll mini = q.front().second;
            ll first, last;

            for(int i=0; i<size; i++) {
                TreeNode *node = q.front().first;
                ll idx = q.front().second - mini;
                q.pop();

                if(i == 0)
                    first = idx;

                if(i == size - 1)
                    last = idx;

                if(node->left)
                    q.push({node->left, 2 * idx + 1});

                if(node->right)
                    q.push({node->right, 2 * idx + 2});
            }
            ans = max(ans, last - first + 1);
        }
        return (int)ans;
    }
};
// @lc code=end

