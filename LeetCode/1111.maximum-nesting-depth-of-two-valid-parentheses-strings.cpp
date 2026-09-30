/*
 * @lc app=leetcode id=1111 lang=cpp
 *
 * [1111] Maximum Nesting Depth of Two Valid Parentheses Strings
 */

// @lc code=start
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int> res(n);

        for(int i=0; i<n; i++)
            res[i] = (i ^ seq[i]) & 1;
            
        return res;
    }
};
// @lc code=end

