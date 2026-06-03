/*
 * @lc app=leetcode id=297 lang=cpp
 *
 * [297] Serialize and Deserialize Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)
            return "";

        string ans;
        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            if(node == nullptr) {
                ans += "# ";
                continue;
            }

            ans += to_string(node->val) + " ";

            q.push(node->left);
            q.push(node->right);
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty())
            return NULL;

        stringstream ss(data);

        string val;
        ss >> val;

        TreeNode *root = new TreeNode(stoi(val));

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            string leftVal, rightVal;
            if(!(ss >> leftVal))
                break;

            if(leftVal != "#") {
                node->left = new TreeNode(stoi(leftVal));
                q.push(node->left);
            }

            if(!(ss >> rightVal))
                break;

            if(rightVal != "#") {
                node->right = new TreeNode(stoi(rightVal));
                q.push(node->right);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
// @lc code=end

