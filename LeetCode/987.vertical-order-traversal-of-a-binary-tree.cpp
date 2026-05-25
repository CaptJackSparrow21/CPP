/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr)
            return ans;

        //col->row->sorted values
        map<int, map<int, multiset<int>>> mp;

        //node, row, col
        queue<pair<TreeNode *, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            TreeNode *node = it.first;

            int row = it.second.first;
            int col = it.second.second;

            mp[col][row].insert(node->val);

            if(node->left)
                q.push({node->left, {row + 1, col - 1}});

            if(node->right)
                q.push({node->right, {row + 1, col + 1}});
        }
        for(auto colPair : mp) {
            vector<int> temp;
            for(auto rowPair : colPair.second) {
                for(auto val : rowPair.second)
                    temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end

