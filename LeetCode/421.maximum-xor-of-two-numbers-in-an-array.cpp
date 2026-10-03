/*
 * @lc app=leetcode id=421 lang=cpp
 *
 * [421] Maximum XOR of Two Numbers in an Array
 */

// @lc code=start
class Solution {
public:
    struct Node{
        Node *child[2]{};
    };

    void insert(Node *root, int x) {
        Node *curr = root;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            if(!curr->child[bit])
                curr->child[bit] = new Node();
            curr = curr->child[bit];
        }
    }

    int maxXor(Node *root, int x) {
        Node *curr = root;
        int ans = 0;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            int opposite = bit ^ 1;

            if(curr->child[opposite]) {
                ans |= (1 << b);
                curr = curr->child[opposite];
            }
            else 
                curr = curr->child[bit];
        }
        return ans;
    }

    int findMaximumXOR(vector<int>& nums) {
        Node *root = new Node();
        for(int x : nums)
            insert(root, x);

        int ans = 0;
        for(int x : nums)
            ans = max(ans, maxXor(root, x));

        return ans;
    }
};
// @lc code=end

