/*
 * @lc app=leetcode id=1707 lang=cpp
 *
 * [1707] Maximum XOR With an Element From Array
 */

// @lc code=start
class Solution {
public:
    struct Node {
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

    int getmaxXor(Node *root, int x) {
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

    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        sort(nums.begin(), nums.end());
        vector<array<int, 3>> q;
        for(int i=0; i<queries.size(); i++)
            q.push_back({queries[i][1], queries[i][0], i});

        sort(q.begin(), q.end());
        vector<int> ans(queries.size(), -1);

        Node *root = new Node();
        int j = 0;
        for(auto [m, x, idx] : q) {
            while(j < nums.size() && nums[j] <= m) {
                insert(root, nums[j]);
                j++;
            }
            if(j > 0)
                ans[idx] = getmaxXor(root, x);
        }
        return ans;
    }
};
// @lc code=end

